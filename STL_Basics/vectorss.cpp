#include<bits/stdc++.h>
using namespace std;
int main(){
        // pair<int,int> p={1,2};
    // cout<<p.first;
    // cout<<p.second;
//pair datatype/////////////////////////////////
pair<int,pair<int,int>>p={1,{2,3}};
cout << p.first <<"  " << p.second.first<<endl;
p.second.first=4;
cout << p.first <<"  " << p.second.first<<endl;
//Vectros datatype//////////////////////////////

vector<int> v;
v.push_back(1); // insert element
v.emplace_back(2);// inserts element it is faster back that push_back
cout<<v[0]<<v[1]<<endl; 
vector<pair<int,int>> vp;
vp.push_back({1,2}); // we need to specify as a pair
vp.emplace_back(1,2); // no need specify as a pair
//  defining the vector with size

vector<int> vs(5,100);
cout<<vs[0]<<endl<<endl;


// iterators 

vector<int>::iterator it = vs.begin();
cout<<*(it)<<endl;
it++;

cout<<*(it)<<endl;
it++;
cout<<*(it)<<endl;
it++;
cout<<*(it)<<endl;
it++;
 vector<int>::iterator its=vs.end();// {100,100,100,100} ; v.end() takes to 5th index
 its--;
cout<<*(its);
auto itm=vs.rbegin();
cout<<*(itm);
// priting a vector 
cout<<endl;
cout<<vs.back(); // prints the last element in the vector
// using for loop
cout<<endl;
vector<int> vc={1,2,3,34,5,6};
for(auto vcs=vc.begin();vcs!= vc.end(); vcs++){
    cout<<*(vcs)<<endl;
}

//  for each loop

for(auto itcc:vc){
    cout<<itcc<<endl;
}
int arr[5]={5,6,7,8,9};
for(int k:v){
    cout<<k;
}
cout<<endl<<endl;


// vector erase function  1st element is removed
vc.erase(vc.begin());
vc.erase(vc.begin(),vc.begin()+3);
vc.insert(vc.begin(),898);
vc.insert(vc.begin(),2,10); // insert 10 2 10's
for(auto itcc:vc){
    cout<<itcc<<endl;
}
cout<<v.empty();
// lists simillar to vector but gives front operations as well

list<int> ls;
ls.push_back(2);
ls.push_front(1);
cout<<endl;
for(auto itc:ls){
    cout<<itc;
}

//  deque : simillar to vector
deque<int>dq;
// stack : lifo
stack<int> st;
// .push()
// .pop()
// .top()
// .size()


//  queue : fifo
queue<int> q;
// q.back
// q.front


// prioriy 
// fifo but the element with largets value starts at the top
priority_queue<int> pq;

// set

set<int>ss;

// stores everything in sorted array
auto itkss= ss.find(3); // element no in the set return null

// ss.erase(start,end);

// multiset multi set stores in sorted order;

// unordered set


// map 

map<int,int> mpp;
// map<int, pair<int,int>>mpp; // stores in key value pair

mpp[1]=2;

auto klm= mpp.begin();
mpp.insert({3,4});

cout<<endl<<mpp[3];

// multimap : stores duplicate keys 

// sort( start,end,comp)
int num = 8;
int cin=__builtin_popcount(num);
cout<<cin;
}