/*
A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
*/

#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int num,n=0,t,arm=0;
	cin>>num;
	t = num;
	while(t!=0){
		n++;
		t/=10;
	}
	
	t = num;
	while(t!=0){
		arm += pow((t%10),n);
		t/=10;
	}
	if(arm==num){
		cout<<"true";
	}else{
		cout<<"false";
	}

	return 0;
}