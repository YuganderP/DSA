#include<bits/stdc++.h>
using namespace std;
int main(){

    int size = 5;
    int arr[size]={6,5,4,3,2};
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
for( int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}

