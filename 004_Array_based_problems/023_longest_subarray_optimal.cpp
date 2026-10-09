#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, -3, 3, 1, 1, 1, 1, 4, 2, 3};
    int kk = 3;
    int maxs = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (sum == kk)
        {
            maxs = i + 1;
        }
        else if (sum > kk)
        {
            int diff = sum - kk;
            if (mp.find(diff) != mp.end())
            {
                maxs = max(maxs, i - mp[diff]);
            }
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    cout << maxs;
}