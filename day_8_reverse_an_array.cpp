#include<iostream>
using namespace std;
int main(){
    int size =10;
    int arr[size]={1,2,3,4,5,6,7,8,9,0};
    cout<<"our aim is to reverse an array"<<endl;
    for(int i=0; i<(size/2);i++){
        int k = arr[i];
        int l=arr[size-1-i];
        arr[i]=l;
        arr[size-1-i]=k;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<i<<endl;
    }
}