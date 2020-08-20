#include <iostream>
#include<cstring>

using namespace std;

int main(){

    char largest[1000] = "",inp[1000];
    int n;
    cin>>n;
    cin.get();

    for(int i = 0;i<n;i++){
        cin.getline(inp,1000);
        if(strlen(largest)<strlen(inp)){
            strcpy(largest,inp);
        }

    }    

    cout<<largest<<" length: "<<strlen(largest);

    return 0;
}