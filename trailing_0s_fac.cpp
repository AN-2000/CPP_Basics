#include<iostream>

using namespace std;

int trailingZeros(int n){
    int ans = 0;
    int d = 5;
    while(n/d){
        ans+=n/d;
        d*=5;
    }
        return ans;

}

int main(){
    int n;
    cin>>n;
    cout<<trailingZeros(n);

}