#include<bits/stdc++.h>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int next=0;
    for(int i=0;i<9;i++){
         next=first+second;
        first=second;
        second=next;

    }
cout<<next<<" ";
}