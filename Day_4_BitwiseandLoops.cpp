#include<iostream>
using namespace std;
int main(){

    int a =12345;
    int sum=0;
    int product=1;
while(a!=0){
    int digit = a%10;
    product = product * digit;
    sum = sum + digit;
    a=a/10;
}

cout<<product-sum;

cout<<endl<<"The following loop counts the number of 1 bits in the given unsigned int:  "<<endl;
 uint32_t k = 111;
    int count = 0;

while (k) {
        count += k % 10;
        k /= 2;
    }

    cout << "Number of '1' bits in binary representation of 111: " << count << endl;

    return 0;
}