#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};
    for(int i=1;i<n;i++){
   int current=arr[i];
   int j=i-1;
   while(j>=0&& arr[j]>current){
    swap(arr[j],arr[j+1]);
    j--;
   }
for(int i=0;i<n;i++){
    cout<<arr[i];
}
 cout<<endl;
    }


}