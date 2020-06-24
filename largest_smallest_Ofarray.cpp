#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[1000];
    int n;
    cin>>n;

    
    int largest = INT_MIN; // let largest be - infinity 
    int smallest = INT_MAX; // let smallest be +infinity

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);
    }

    cout<<largest<<endl<<smallest<<endl;

    

    
    return 0;
}