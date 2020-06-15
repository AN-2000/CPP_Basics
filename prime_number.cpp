#include <iostream>

using namespace std;

int main(){
    int n,f=1;
    cin>>n;


    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not prime";
            f=0;
            break;
        }
    }

    if(f!=0){
        cout<<"Prime";
    }


    return 0;
}