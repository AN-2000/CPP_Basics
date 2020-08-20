#include<iostream>

using namespace std;

bool isPalindrome(char a[]){

    int i =0;
    int len = 0;
    while(a[i]!='\0'){
        len++;i++;}

    for(int j = 0;j<len/2;j++){
        if(a[j]!=a[len-1-j]){
            return false;
        }
    }

    return true;

}

int main(){
    char a[100];
    cin>>a;

    cout<<isPalindrome(a);

    return 0;
}