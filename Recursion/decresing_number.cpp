#include<iostream>
using namespace std;
void decresing(int n)
{
    if(n>0){
        n--;
    decresing(n);
cout<<n<<"  ";
}

}
int main(){

decresing(100);
}