#include<iostream>
using namespace std;
int main(){
    int size=1;
    int arr[size]={3};
    int start=0;
    int end=size;
    int target=3;
    while(start<=end){
        int mid=(start+(end-start)/2); // reason start + end/2 - start /2 => start/2 +end/2
        if(target==arr[mid]){
            cout<<mid;
            break;
        }
        else if(target<arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
   
    }

}