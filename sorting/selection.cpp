#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};
    for(int i=0; i<=n-2;i++){
        int min=i;
        for(int j=i;j<n;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            swap(arr[min],arr[i]);
        }
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}