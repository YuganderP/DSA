#include<iostream>
using namespace std;
int main()
{
    int a = 31;
    int twoMul=1;
    for(int i=0;i<30;i++){
        if(twoMul==a){
            cout<<"comes in the 2^ series";
            break;
        }

        if(twoMul<INT32_MAX)
        twoMul*=2;
    }
}