#include <iostream>

using namespace std;

int main(){

    int n, i = 1, sum = 0; //initial condition
    //Input
    cin>>n;
    while(i<=n){ //Stoping condition
        sum = sum + i;
        i = i + 1; //Update condition
    }
    cout<<"sum:"<<sum;
    return 0;
}

