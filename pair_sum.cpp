#include<iostream>

using namespace std;

int main(){
    int a[] = {1,3,5,7,10,11,12,13};
    int k =16;

    int i = 0;
    int j = sizeof(a)/sizeof(int) - 1;

    while(i<j){
        int pairSum = a[i]+a[j];
        if(pairSum<k){
            i++;
        }else if(pairSum>k){
            j--;
        }else{
            cout<<"{ "<<a[i]<<" , "<<a[j]<<" }"<<endl;
            i++;
            j--;
        }
    }
    return 0;
}