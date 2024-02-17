#include<iostream>
using namespace std;
int main(){
 int size =5;
 int arr[size]={7,8,9,10,1};
 int start=0;
 int end=size;
 while(start<end){
    int mid=start+(end-start)/2;
     if(arr[mid]>=arr[0]){
        start=mid+1;
     }else{
        end=mid;
     }

}
cout<<start;
}