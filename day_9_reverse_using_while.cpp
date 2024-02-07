#include<iostream>
using namespace std;
int main(){
    int size = 10;
    int arr[size]={1,2,3,4,5,6,7,8,9,0};
    int start=0;
    int end=size-1;
    while(start<=end){
        int k = arr[start];
        arr[start]=arr[end];
        arr[end]=k;
        start++;
        end--;
    }
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}