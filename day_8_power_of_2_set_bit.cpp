#include<iostream>
using namespace std;
int main(){
    int a=9;
    int set=0;
    while(a!=0){
        int bit=a&1;
        
        if(bit==1){
            set+=1;
        }
       a=a>>1;
    }
    cout<<set;
    if(set==1){
        cout<<endl<<"The given number is a power of 2";
    }
    
}