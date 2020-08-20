#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s[10];
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>s[i];
    }

    cout<<endl<<endl;

    sort(s,s+n);   

    for(int i = 0;i<n;i++){
        cout<<s[i]<<endl;
    }
  
    

    return 0;
}