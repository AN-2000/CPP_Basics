#include<iostream>
using namespace std;
int main() {

	int n,o=0,p=1;
	cin>>n;

	char s ;

	if(n<0){
		n*=-1;
		s='-';
	}else{
		s='+';
	}

	while(n!=0){
		o+=(p*(n%8));
		p*=10;
		n/=8;
	}
	

	if(s=='-'){
		o*=-1;
	}
	cout<<o;
	return 0;
}