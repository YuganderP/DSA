/*
intro into cpp programming 
namespace 
basic syntax 
operators 
bitwise operators


*/


#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";

// The below is the code to check for the prime number

cout<<"Please enter a number which you wnat to check if its prime or not: ";
int a;
cin>>a;

if(a>2){
int i =2;
while(i<a){
  if(a%i==0){
    cout<<a<<" not a prime number";
    break;
  }else if(i==a-1){
    cout<<a<<" is a prime number";
  }
  i++;

}

}





}


