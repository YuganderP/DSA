#include<iostream>
using namespace std;
 int mySqrt(int x) {
    int start=0;
    int end=x-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<end){
        int square= mid*mid;
        cout<<square;
        if(square==x){
            return mid;
        }
        else if(square<x){
            ans=mid;
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
    }
  return ans; 
    }
int main(){
 cout<<mySqrt(36);   
}