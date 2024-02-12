#include<iostream>
using namespace std;
int main(){
    int size_1=5;
    int size_2=4;
    int arr[size_1]={3,3,5,6,7};
    int arr_2[size_2]={3,3,5,6};
    int i=0,j=0;

    while(i<size_1 && j<size_2){
        if(arr[i]<arr_2[j]){
            i++;
        }else if(arr[i]>arr_2[j]){
            j++;
        }else{
            cout<<arr[i];
            i++;
            j++;
        }
    }
    
}