#include <iostream>

using namespace std;

void insertionSort(int a[],int n){

    for(int i = 0;i<n-1;i++){
        int keyToBeInserted = a[i+1];
        int j = i;
        while(j>=0 && a[j]>keyToBeInserted){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = keyToBeInserted;
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

    insertionSort(a,n);

    return 0;
}