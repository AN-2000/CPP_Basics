#include<iostream>
#include <string>
using namespace std;
int main() {

    int n;
    cin>>n;
    string sa,sb;
    for(int i=0;i<n;i++){
        sb = "";
        cin>>sa;
        
        for(int j = 0;j<sa.length()-2;j+=2)
        sb+=sa.substr(j,2)[0];

        sb+=sa.substr(sa.length()-2,2);

        cout<<sb<<endl;
    }

	
	return 0;
}