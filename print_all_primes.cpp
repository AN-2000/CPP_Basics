#include <iostream>

using namespace std;


bool isPrime(int n){

    for(int i =2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }

 
        return true;
}

void printNPrimes(int n){
    int p = 1;
    while(n>0){
        if(isPrime(p)){
            cout<<p<<endl;
            n--;
        }
        p++;
    }
}

int main(){
    int n;
    cin>>n;
    printNPrimes(n);

    
    


    return 0;
}