// union : add 2 arrays with no duplicates

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 3, 4, 5};
    int brr[] = {2, 3, 4, 5, 6, 7};
    set<int> s;
    for (auto it : arr)
    {
        s.insert(it);
    }
    for (auto it : brr)
    {
        s.insert(it);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
}
