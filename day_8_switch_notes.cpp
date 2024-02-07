#include<iostream>
using namespace std;
int main(){
    cout<<"notes problem"<<endl;
    int n =4191;
    int hud=0,fif=0,twt=0,ten=0;
    if(n>=100){
         hud=n/100;
        n=n-(100*hud);
        
    }
    if(n>=50){
         fif=n/50;
        n=n-(50*fif);
    }
    if(n>=20){
         twt=n/20;
        n=n-(20*twt);
    }
    if(n>=10){
         ten=n/10;
        n=n-(10*ten);
    
    }
    cout<<hud<<endl<<fif<<endl<<twt<<endl<<ten;
}