#include<iostream>
using namespace std;
int main(){
    int a =112;
    int32_t ans=0;
    while(a!=0){
        int digit = a%10;
        if(ans>(INT32_MAX/10 )|| ans <(INT32_MIN/10)){
            ans=0;
            break; 
        }else{
        ans= (ans*10)+digit;
            
        
        }
        a=a/10;
    }
cout<<ans;
}