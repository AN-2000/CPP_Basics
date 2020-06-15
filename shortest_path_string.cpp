#include <iostream>

using namespace std;

int main(){
    int x=0,y=0;
    char ch;
    ch = cin.get();

    while(ch!='\n'){
        if(ch=='N'){
            y++;
        }else if(ch=='S'){
            y--;
        }

        if(ch == 'E'){
            x++;
        }else if(ch == 'W'){
            x--;
        }

        ch = cin.get();
    }

    cout<<x<<endl;
    cout<<y<<endl;

    

    if(y>0){
        for(int i =0;i<y;i++){
            cout<<"N";
        }
    }else{
        for(int i = y;i<0;i++){
            cout<<"S";
        }
    }
    

    if(x>0){
        for(int i =0;i<x;i++){
            cout<<"E";
        }
    }else{
        for(int i = x;i<0;i++){
            cout<<"W";
        }
    }

    return 0;
}