#include<bits/stdc++.h>
using namespace std;
int main(){

    int size = 5;
    int arr[size]={5,4,3,2,1};
    for(int i=0;i<size-2;i++){
        int min=i;
        for(int j=i;j<=size-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }    
            cout<<arr[min];
            swap(arr[min],arr[i]);       
        }
    cout<<endl;
    }
for(int i=0;i<size;i++){
    // cout<<arr[i]<<endl;
}
}