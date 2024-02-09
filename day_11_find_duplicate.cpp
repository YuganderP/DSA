#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size]={1,2,3,4,3};
    int ans=0;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        ans+=(i+1);
    }
    cout<<(size-(ans-sum));
}