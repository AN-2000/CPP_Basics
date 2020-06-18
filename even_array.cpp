#include <iostream>
using namespace std; 
int main(){
    int tt,n,op,ep,num;
    cin>>tt;
    
    for(int i=0;i<tt;i++){

        cin>>n;

        op=0,ep=0;

        for(int j=0;j<n;j++){
            

            cin>>num;
            if((j%2==0) && (num%2==1)){
                op++;
            }

            if((j%2==1) && (num%2==0)){
                ep++;
            }
        }
       
        if(op==ep){
            cout<<op<<endl;
        }else{
            cout<<-1<<endl;
        }
    
    
}
return 0;
}