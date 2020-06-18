#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++){
        int v;
        v = (i%2==0)? 1 : 0;

        for(int j = 1;j<=i;j++){

            cout<<v;
            if(v==0){
                v = 1;
            }else{
                v = 0;
            }
        }
        cout<<endl;
    }

    return 0;
}