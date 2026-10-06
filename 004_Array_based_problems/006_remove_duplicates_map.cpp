#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3};
    map<int, int> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}