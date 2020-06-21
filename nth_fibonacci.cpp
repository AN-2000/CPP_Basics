#include <iostream>

using namespace std;

int nfibo(int n){
    int a = 0;
    int b = 1;
    int c = a + b;

    while(n>0){
        n--;
        c = a+b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<nfibo(n);

    
    


    return 0;
}