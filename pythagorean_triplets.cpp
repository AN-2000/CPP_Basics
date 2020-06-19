#include <iostream>
using namespace std;

int main(){
    long long N,a,b,h;
    cin>>N;

    if(N%2==0){
        b = N;
        a = ((N/2)*(N/2))-1;
        h = ((N/2)*(N/2))+1;
    }else{
        b = N;
        a = ((N*N)-1)/2;
        h = ((N*N)+2)/2;
    }

    if(a>0 && b>0 && h>0){
        cout<<a<<" "<<h<<endl;
    }else{
        cout<<"-1"<<endl;
    }

    return 0;
}