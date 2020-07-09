#include <iostream>

using namespace std;

int main(){
    int a[1000];
    int n;
    cin>>n;

    int maxSum,currSum;

    cin>>a[0];
    maxSum = currSum = a[0];

    for(int i = 1;i<n;i++){

        cin>>a[i];

        if(currSum<0){
            currSum = a[i];
        }else{
            currSum = currSum + a[i];
        }

        if(maxSum<currSum){
            maxSum = currSum;
        }

    }


    cout<<maxSum;

    return 0;
}