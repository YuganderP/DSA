#include<iostream>
#include <cmath>
using namespace std;

// The following is the code to convert deicmal to binary 

int main()
{
int ans=0;
int i=13;
int k=0;
while(i>0){

    int bit=i&1;
i=i>>1;    
    
    ans=ans+(pow(10,k)*bit);
k++;
}
cout<<ans<<endl;


// The following code to convert from binary to decimal
int bit_t=0;
int anss=0;
int kk=0;
while(ans!=0){
    bit_t=ans%10;
    
    if(bit_t==1){
        anss=pow(kk,2)+anss;
    }
    kk++;
    
ans=ans/10;
}
cout<<anss;
// cout<<anss;
}

