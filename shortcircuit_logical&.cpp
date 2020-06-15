#include <iostream>

using namespace std;

int main(){

    //&& <- logical AND
    //& <- bitwise AND

    //ShortCircuit 
    //If you are using logical AND and the left expression of AND is false the right expression of AND will not be evaluated. This does not happens in bitwise AND

    int m;
    (8<5 && (m = (8%2!=0)));
    cout<<m<<endl;

    int n;
    (8<5 & (n = (8%2!=0)));
    cout<<n;

    return 0;
}