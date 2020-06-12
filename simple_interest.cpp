
#include <iostream>

using namespace std;

int main(){

    // int p = 10, r = 25, t = 1;



    int p,r,t;

    cin>>p>>r;
    cin>>t;

    //Implicit TypeCasting => Rich Conversion
    float si = ((p*r*t)/100.0);
    cout<<si;
    return 0;
}