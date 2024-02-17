// Peak of the mountain: increasing upto i index and then decreasing
// leet code problem ; dry run the test case to understand
#include<iostream>
using namespace std;
int main(){
    int size=10;
    int arr[size]={0,1,3,2,1,2,3,4,1,2};
    int start=0;
    int end=size;
        
    while(start<end){
int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    

    }
    cout<<start<<" "<<end;
    
}