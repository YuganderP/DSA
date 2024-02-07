#include<iostream>
using namespace std;
int  main(){
    int a=2;
    int mask=0;
    while(a>0){
        mask = (mask<<1|1);
        a=a>>1; 
    }
cout<<((~a)&mask);
}