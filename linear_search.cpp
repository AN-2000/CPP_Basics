#include<iostream>
using namespace std;

int main(){
    int a[10] = {2,1,4,3,6,5,0,9,8,7};
    int n = sizeof(a)/sizeof(int);

    int k;
    cin>>k;
    int index = -1;
    for(int i = 0;i<n;i++){
        if(a[i]==k){
            index = i;
            break;
        }
    }

    cout<<index;
    
    return 0;
}