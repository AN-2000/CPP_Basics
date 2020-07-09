#include <iostream>

using namespace std;

int main(){
    int n,maxSum=0,left=-1,right=-1;
    cin>>n;
    int a[1000];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){  
            int currSum = 0;
            for(int k = i;k<=j;k++){
                currSum+=a[k];
            }
            if(maxSum<currSum){
                maxSum = currSum;
                left = i;
                right = j;
            }
        }
    }

    cout<<"Maximum Sum:"<<maxSum<<endl<<"{ ";

    for(int i = left;i<=right;i++){
        cout<<a[i]<<" ";
    }
    cout<<"}";

    return 0;
}