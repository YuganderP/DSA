#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[]={1,1,2,3,4};
    int ans=0;
    
    for(int i=0;i<size;i++){
    cout<<ans<<arr[i]<<" ";
    ans=ans^arr[i];
    
    cout<<ans<<endl;

    }

for(int i=0;i<size;i++){
    ans=ans^i;
}

    cout<<ans;
}

