
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size=6;
    int arr[size]={5,6,8,7,9,4};
    for(int i=1;i<6;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key < arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}