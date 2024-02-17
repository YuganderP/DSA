#include<iostream>
using namespace std;
bool check(string s, int l, int count){
    if(s[l]==s[count-1-l]){
        check(s,l+1,count);
    }else{
        return false;
    }
 return true;
}
int main(){
    string s="radas";
    cout<<check(s,0,5);
}