#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n>0){
		int bNum;
		int mf = 1;
		int ans = 0;
		cin>>bNum;
		while(bNum!=0){
			ans	= ans + (bNum%10)*mf;
			bNum = bNum/10;
			mf = mf*2;
		}
		cout<<ans<<endl;
		n=n-1;
	}
	return 0;
}