#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size]={0,1,0,1,1};
    int left=0;
    int right=size-1;
    while(left<right){

        if(arr[left]==0){
            left++;
           
        }else if(arr[right]==1){
            right--;
        }else if(arr[left]==1){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    
}

cout<<endl;

    }

}