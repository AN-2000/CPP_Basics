#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int t;
        cin>>t;
        cout<<t*t<<endl;
        n = n-1;
    }
    return 0;
}

// To take input in console from file use ./a.exe < filename.txt
// To take output in console to a file use ./a.exe > filename.txt
// To take input and output in console using file use ./a.exe < InputFilename.txt > OutputFileName
