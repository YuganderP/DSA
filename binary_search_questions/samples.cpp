#include<iostream>
using namespace std;
int main(){
    int size=7;
    int arr[size]={0,1,2,3,2,1,0};
    int start=0;
    int end=size;
int peak =-1;
    while(start<end){
        int mid=start+(end-start)/2;
        cout<<"start"<<start<<" end"<<end<<endl;
         if(arr[mid]<arr[mid+1]){
                              start=mid+1;                                                                                                     
        } else{
            end=mid;
        }


    }
cout<<start;
}