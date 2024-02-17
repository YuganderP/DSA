#include<bits/stdc++.h>
using namespace std;
void usingSinglePointer(int arr[],int l,int size){
    
    if(l<=size/2){
            swap(arr[l],arr[size-l-1]);
            usingSinglePointer(arr,l+1,size);
    }

}

int main(){

int arrs[5]={1,2,3,4,5};
// reverse(arrs,0,4);
// int size =(sizeof(arrs)/sizeof(arrs[0]));
// cout<<size<<endl;
usingSinglePointer(arrs,0,5);
cout<<"hello world";

}
