#include<iostream>
using namespace std;
int total=0;
int back(int n,int count){
if(n<=count)
{

cout<<"hello world"<<n<<endl;
total+=n;
back(n+1,count);
}else{
    return total;
}

}

int another(int n,int total){
    if(n>0){
        total=total+n;
        
        another(n-1,total);
        
    }
    else {return total;}
}

int functional(int count){
if(count!=0){
 return count*functional(count-1);
}else{
    return 1;
}
 
}

main(){
cout<<back(1,5);
cout<<endl<<endl;
cout<<another(5,0)<<endl;
cout<<"hello:"<<functional(5);
return 0;

}