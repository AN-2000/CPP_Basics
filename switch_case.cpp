//cases can only be int or char and not complex expressions which we can have in if statements.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    switch(ch){
        case 'b':                   //Fall through
        case 'B':
            cout<<"Burger"<<endl;
            break;
        case 'm':
        case 'M':
            cout<<"Maggi"<<endl;
            break;
        case 'p':
        case 'P':
            cout<<"Pizza"<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"Chocolate"<<endl;
            break;

        case 'd':
        case 'D':
            cout<<"Donut"<<endl;
            break;
        
        default:
            cout<<"Invalid";
            break;
    }

    return 0;
}