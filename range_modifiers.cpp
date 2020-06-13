#include <iostream>

using namespace std;

int main(){

    //Range modifiers
    //short long long signed unsigned

    int x = 2;
    long long int y = 3;
    short int z = 1;
   
    cout<<"Memory of int: "<< sizeof(x)<<endl;
    cout<<"Memory of long long int: "<< sizeof(y)<<endl;
    cout<<"Memory of short int: "<< sizeof(z)<<endl;
   
    return 0;
}