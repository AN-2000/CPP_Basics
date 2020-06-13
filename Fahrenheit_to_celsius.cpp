#include <iostream>

using namespace std;

int main(){
    int f = 0,c;

    cout<<"F "<<"C "<<endl;

    while(f<=300){
        // 9.0 because 5/9 => int division 
        c = (f-32)*(5/9.0);

        cout<<f<<" "<<c<<" "<<endl;    
        f=f+20;
    }

    return 0;
}