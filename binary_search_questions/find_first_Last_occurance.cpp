// for this problem we write 2 function one function to find the left occurance and another for the right occurance 
#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size]={1,2,3,3,5};
    int start = 0;
    int end= size;
        int mid=start+(end-start)/2;
    int left =-1;
    int target=3;
    // for left most occurance;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            left=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
cout<<left;
int right=-1;
// for right side element
start=0;
end=size;
while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            right=mid;
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
cout<<right;

// to count the number of occurances : last index - first index +1
cout<<endl<<"count"<<right-left+1;
}