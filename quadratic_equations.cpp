#include<iostream>
#include<math.h>
using namespace std;
 
 

int main() {
	int a,b,c,x1,x2;
	float d;

	cin>>a>>b>>c;
	
	d = sqrt(((b*b)-(4*a*c)));
	
	if((d==int(d))){
		
  		if(d == 0){
			cout<<"Real and Equal"<<endl;
		  }else{
			cout<<"Real and Distinct"<<endl;
		  } 

		  cout<<(-b - d)/2*a<<" ";
		  cout<<(-b + d)/2*a;

	}else{
		cout<<"Imaginary ";
	}

	return 0;
}