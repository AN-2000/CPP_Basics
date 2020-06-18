#include<iostream>
using namespace std;
int main() {
	int n,cnum,oddSum=0,evenSum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		oddSum=0,evenSum=0;
		
		cin>>cnum;
		while(cnum!=0){
			int t = cnum%10;
			cnum/=10;
			if(t%2==0){
				evenSum+=t;
			}else{
				oddSum+=t;
			}
		}


		if((oddSum%3==0)||(evenSum%4==0)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}

	}

	
	return 0;
}