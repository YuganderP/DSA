#include<iostream>
using namespace std;
int main(){
    int target=121;
    int start=1;
    int end=target-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if((mid*mid)==target){
            cout<<mid;
            break;
        }else if((mid*mid)>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}

