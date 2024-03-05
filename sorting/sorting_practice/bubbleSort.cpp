#include<bits/stdc++.h>
using namespace std;
int main(){

    int size = 5;
    int arr[size]={6,5,4,3,2};
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }



for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}