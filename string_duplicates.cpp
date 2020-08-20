#include<iostream>
#include<cstring>

using namespace std;

void removeDuplicates(char a[]){
    int l = strlen(a), i = 0,j=1;

    if(l==0 || l==1){
        cout<<a;
        return;
    }

    while(j<l){
        if(a[i]==a[j]){
            j++;
        }
        else{
            a[i+1] = a[j];
            i++;
        }

    }

    a[i+1] = '\0';
    cout<<a;
    
}

int main(){
    char a[1000];
    cin.getline(a,1000);

    removeDuplicates(a);
    return 0;
}