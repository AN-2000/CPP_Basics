#include<iostream>
using namespace std;
int main() {
	char ch;
	int n1, n2;
	
	
	do
	{	
		cin>>ch;
        if(ch=='/' ||ch=='+' ||ch=='%' ||ch=='-' ||ch=='*'  ){
            cin>>n1;
            cin>>n2;
        }else{
            cout<<"Invalid operation. Try again.";
            continue;
        }

        	switch(ch){
			case '+':
				cout<<n1+n2<<endl;
				break;

			case '-':
				cout<<n1-n2<<endl;
				break;

			case '*':
				cout<<n1*n2<<endl;
				break;

			case '/':
				cout<<n1/n2<<endl;
				break;

			case '%':
				cout<<n1%n2<<endl;
				break;				
		}


	}while ((ch!='X')&&(ch!='x'));

	return 0;
}