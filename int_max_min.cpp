#include <iostream>
#include <climits>

using namespace std; 

int main(){
    int x = INT_MAX;
    int y = INT_MIN;

    cout<<"Max int value : "<<x<<endl;
    cout<<"Min int value : "<<y<<endl;


    cout<<"------------------------------------------------ "<<endl;

    cout<<"Wrap Around "<<endl;
    cout<<"------------------------------------------------ "<<endl;
    cout<<"------------------------------------------------ "<<endl;


    x = x + 1;
    cout<<"Max int value + 1 : "<<x<<endl;

    x = INT_MAX;


    x = x + INT_MAX + 2 ;
    cout<<"Max int value + Max int value + 2: "<<x<<endl;


    return 0;
}