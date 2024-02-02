#include<iostream>
using namespace std;
  int complementFunc(int a){
        if(a==0){
            return 1;
        }        
        int k = a;
        int mask = 0;
        
        while(k!=0){
            mask= (mask <<1 )|1;
            k = k>>1;
        }
        return ((~k)&mask);
    }

int main(){
    int a =2;
    int k =complementFunc(a);
    cout<<k;
    
}