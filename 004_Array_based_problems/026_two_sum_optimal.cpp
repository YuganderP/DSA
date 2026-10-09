#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 6, 5, 8, 11, 2, 6};
    int target = 8;
    int sizes = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mp;
    for (int i = 0; i < sizes; i++)
    {
        int a = arr[i];
        int more = target - a;
        if (mp.find(more) != mp.end())
        {
            cout << "Pair found: " << a << " + " << more << " = " << target << endl;
        }
        mp[a] = i;
    }
}