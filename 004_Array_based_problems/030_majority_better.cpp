#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 2, 1, 2, 3, 2};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int half = sizes / 2;
    map<int, int> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        if (it.second > half)
        {
            cout << it.first << " is the majority element";
            break;
        }
    }
}