#include<iostream>
using namespace std;
int main() {
	int n,d,c=0;
	cin>>n>>d;
	while(n!=0){
		if((n%10)==d){
			c++;
		}
		n/=10;
	}
	cout<<c;
	return 0;
}