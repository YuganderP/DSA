#include<iostream>
using namespace std;
int main(){
    int size_1=5;
    int size_2=4;
    int arr[size_1]={3,3,5,6,7};
    int arr_2[size_2]={3,3,5,6};
    int start2=0;
   for(int i=0;i<size_1;i++){      
            int element=arr[i];
            if(element<arr_2[start2]){
                continue;

            }
            else{
                for(int j=start2;j<size_2;j++){
                if(element==arr_2[j]){
                    cout<<element;
                    arr_2[j]=-1412;
                    break;
                }
            }

            }
}

    
}