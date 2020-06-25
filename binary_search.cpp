#include<iostream>
using namespace std;


int binarySearch(int a[],int n,int k){
    int s = 0;
    int e = n - 1;
    int mid = (s+e)/2;

    while(s<=e){
        if(a[mid] == k){
            return mid;
        }else if(a[mid]<k){
            s = mid + 1;
            mid = (s+e)/2;
        }else if(a[mid]>k){
            e = mid - 1;
            mid = (s+e)/2;
        }
    }
    return -1;
}

int main(){
    int a[1000];
    int k, n;
    cin>>k>>n;


    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    cout<<binarySearch(a,n,k);

    
    return 0;
}