#include <iostream>
using namespace std; 

int main(){
    int n,u=0,inp;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>inp;
        u = u ^ inp;
    }

    cout<<u;

    return 0;
}

//No short double
// Assigning negative numbers to unsigned gives wrap around

