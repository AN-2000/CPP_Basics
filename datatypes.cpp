#include <iostream>

using namespace std;

int main(){

    //Primitive type
    //int float double char bool

    int x = 2;
    float y = 3.12;
    double z = 3.12432;
    char ch = 'A';
    bool decision = true;

    cout<<"Size depends on compiler and machine used."<<endl;
    cout<<"Memory of int: "<< sizeof(x)<<endl;
    cout<<"Memory of float: "<< sizeof(y)<<endl;
    cout<<"Memory of double: "<< sizeof(double)<<endl;
    cout<<"Memory of char: "<< sizeof(ch)<<endl;
    cout<<"Memory of bool: "<< sizeof(bool)<<endl;

    return 0;
}