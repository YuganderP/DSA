#include<iostream>
using namespace std;
int getPivot(int arr[],int size){
    int start =0;
    int end=size;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
          
        }else{
             end=mid; 
        }
    }
return start;
}
int main(){
    int size=5;
    int arr[size]={8,9,1,2,3};
    int pivot=getPivot(arr,5);
    int target=9;
//  now apply the binary search from pivot index to end of the Array
int start,end;

if(arr[pivot]<=target&& target<=arr[size-1]){
 start=pivot;
 end=size-1;

}else {
     end=pivot;
     start=0;
}

cout<<start<<end;
cout<<endl;
for(int i=start;i<=end;i++) cout<<arr[i];
}




