#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3};
    set<int> s;
    for (auto it : arr)
    {
        s.insert(it);
    }

    for (auto it : s)
    {
        cout << it << " ";
    }
}