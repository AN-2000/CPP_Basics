#include <iostream>

using namespace std;

int main(){

    int n,min,max;
    cin>>n;

    cin>>min;
    max = min;

    while(n-1>0){
        int t;
        cin>>t;

        if(min>t){
            min = t;
        }

        if(max<t){
            max = t;
        }

        n=n-1;
    }

    cout<<"Min : "<<min<<endl;
    cout<<"Max : "<<max<<endl;

    return 0;
}