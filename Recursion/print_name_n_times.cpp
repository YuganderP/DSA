#include<iostream>
using namespace std;
int names(int N,int count){
    if(count>N){
        return count;
     
    }else{
        cout<<"hello "<<count<<endl;
        count++;
        names(N,count);
    }
}
int main(){
names(5000,1);
}