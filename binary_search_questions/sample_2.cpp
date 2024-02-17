#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size]={7,8,9,10,3};
    int start=0;
    int end=size;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            cout<<mid+1;
            break;

        }else if( arr[mid]>=arr[end]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
}