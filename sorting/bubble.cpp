#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,5,3,1,2};
 for(int i=(n-1);i>=1;i--){
    for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
 }
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}

}