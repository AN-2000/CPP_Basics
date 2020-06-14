#include <iostream>

using namespace std;

int main(){
    int num, precision;
    cin>>num>>precision;

    float inc = 1.0, ans = 1.0;

    for(int i=0;i<=precision;i++){    //i<=p because if p = 3 then loop will run 4 times 1 for int part and 3 times for precision
        while(ans*ans<=num){
            ans = ans + inc;
        }

        ans = ans - inc;
        inc = inc/10;
    }

    cout<<ans;

    return 0;
}