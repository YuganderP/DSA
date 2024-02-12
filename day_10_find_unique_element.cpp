#include<iostream>
using namespace std;
int main(){
    int size=7;
    int arr[size]={1,2,1,2,4,4,5};
int ans=0;
for(int i=0;i<size;i++){
    ans=ans^arr[i];
} 
cout<<ans;
cout<<endl;
}