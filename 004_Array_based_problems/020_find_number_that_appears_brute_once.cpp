#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cout << it.first << endl;
        }
    }
}