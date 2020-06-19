#include <iostream>

using namespace std;

int main(){
    int noc;
    cin>>noc;
    int c1,c2,c3,c4,nru,nmu;


    for(int k = 0;k<noc;k++){

        int costr = 0,costc=0,cost=0;
        cin>>c1>>c2>>c3>>c4>>nru>>nmu;

        for(int i = 0;i <nru;i++){
            int t;
            cin>>t;

            int pc1 = t*c1; 
            if(pc1<c2){
                costr+=pc1;
            }else{
                costr+=c2;
            }
        }

        // cout<<costr<<endl;

        

        for(int i = 0;i <nmu;i++){
            int t;
            cin>>t;

            int pc1 = t*c1; 
            if(pc1<c2){
                costc+=pc1;
            }else{
                costc+=c2;
            }
        }


            if(costc>=c3){
                costc = c3;
            }
            if(costr>=c3){
                costr = c3;
            }
            
       

            cost = costc+costr;

            if(cost>c4){
                cost = c4;
            }
            cout<<cost<<endl;

    }

    


    return 0;
}