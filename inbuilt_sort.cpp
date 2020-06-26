#include <iostream>
#include <algorithm>  //STL contains inbuilt sort function which sort containers which can be array , vectors, etc

using namespace std;

bool comparator(int a,int b){
    return a<b;
}

int main(){

    int a[1000];
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n,comparator);

    // sort(start address of array,end address to which part you want to solve[last is excluded])

    // Right now sort above sort call will sort the array in ascending order we can make it do the sorting in descending order too by passing a comparator function

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}