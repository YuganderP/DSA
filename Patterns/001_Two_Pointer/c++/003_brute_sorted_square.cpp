#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, -2, -1, 0, 1, 2, 3};
    int i = 0;
    vector<int> ans;
    int sizes = sizeof(arr) / sizeof(arr[0]);
    while (i < sizes)
    {
        ans.push_back(arr[i] * arr[i]);
        i++;
    }
    sort(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
}