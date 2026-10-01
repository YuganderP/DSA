// hash map introduction time complexity

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 2, 3, 4, 5, 1, 1, 1, 4};
    unordered_map<int, int> mp;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}