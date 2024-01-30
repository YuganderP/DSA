#include<iostream>
using namespace std;
int main(){
    int n =5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j<<" ";
        }
    cout<<"\n";
    }

int col =0;
for(int i=1;i<=(2*n)-1;i++){

    
    if(i>n){
     col = (2*n)-i;
    }else{
        col= i;
    }
    for(int j=1;j<=col;j++){
        cout<<"* ";
    }
 
cout<<"\n";
}


// 
cout<<"||||||||||||||||||||||"<<endl<<endl;
int tri=5;
int cols=0;
int spaces=0;
for(int i=1;i<=(2*tri);i++){
    if(i>tri){
        cols=(2*tri)-i;
        spaces=i-tri;
    }else{
        cols=i;
        spaces=tri-i;
    }
    
    for(int space=1;space<=spaces;space++){
        cout<<" ";
    }
    for(int j=1;j<=cols;j++){
        cout<<"* ";
    }
    cout<<endl;
}


cout<<"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"<<endl<<endl;


int tris=5;
for(int i=1;i<=5;i++){
    for(int spaces=1;spaces<=tris-i;spaces++){
        cout<<" ";
    }
    for(int j=i;j>1;j--){
        cout<<j;
    }
    for(int k=1;k<=i;k++){
        cout<<k;
    }
cout<<endl;
}






}



