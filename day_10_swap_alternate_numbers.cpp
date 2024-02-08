#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    int size = 6;
    int k=0;
    while(k<size){
        // int num = a[k];
        // a[k]=a[k+1];
        // a[k+1]=num;
        swap(a[k],a[k+1]);
        k+=2;

    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}