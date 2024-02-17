#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123;
    int digit=0;
 int ans=0;
    while(n>0){
        digit=n%10;
        
        ans=ans*10;
        ans+=digit;
        n=n/10;
    }
cout<<ans;
}