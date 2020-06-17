#include <iostream>

using namespace std;

int main(){
    int mif,c,maf,s;
	cin>>mif>>maf>>s;


    while(mif<=maf){
        // 9.0 because 5/9 => int division 
        c =(int)((5.0/9)*(mif-32));


        cout<<mif<<"	"<<c<<endl;    
        mif=mif+s;
    }

    return 0;
}


