#include <iostream>

using namespace std;

void selectionSort(int a[],int n){
    for(int i = 0;i<n-1;i++){
        int m = i;
        for(int j = i+1 ;j<n;j++){

            if(a[m]>a[j]){
                m = j;
            }
        }
        
        //swapping without in-built function
        // int t;
        // t = a[i];
        // a[i] = a[m];
        // a[m] = t;

        //in-built swap function
        swap(a[i],a[m]);
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

    selectionSort(a,n);

    return 0;
}