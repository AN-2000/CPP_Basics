#include <iostream>

using namespace std;

void abcdPattern(int n){
    for(int i=0;i<n;i++){
        char s = 'A';
        for(int j=0;j<n-i;j++){
            cout<<s;
            s++;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    abcdPattern(n);

    
    


    return 0;
}