// while solving pattern questions instead of declaring another variable always try writing the code using already declared row and column variable 


#include<iostream>
using namespace std;
int main(){

int a = 26;
char start = 'A';
for (int i=1;i<=a;i++){
    for(int j=1;j<=i;j++){
        char k=start+a-j;
        cout<<k<<" ";
        
    }
cout<<endl;

}


}