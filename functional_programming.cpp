#include <iostream>

using namespace std;


bool comparator(int a,int b){
    return a > b;
}

void bubbleSort(int a[],int n,bool (&cmp)(int a,int b)){

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-(i+1);j++){
            if(cmp(a[j],a[j+1])){                           //if(a[j]>a[j+1]){  here comparator is working opposite of in-built sort because of if condition
                swap(a[j],a[j+1]);
            }
        }
    }    

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int a[1000];
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    bubbleSort(a,n,comparator);

    return 0;
}