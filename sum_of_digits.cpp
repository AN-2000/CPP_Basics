#include <iostream>

using namespace std;

int main(){

    int d, sum = 0; 
    cin>>d;
    while(d!=0){ 
        sum = sum + (d%10);
        d = d/10;
    }
    cout<<"sum:"<<sum;
    return 0;
}