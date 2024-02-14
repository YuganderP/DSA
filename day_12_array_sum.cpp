#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int size=4;
    int arr[size]={-8,3,4,3};
    
    int n=-4;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size+1;j++){
            // cout<<arr[i]<<arr[j]<<"="<<arr[i]+arr[j]<<endl<<endl;
            if(arr[i]+arr[j]==n){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}