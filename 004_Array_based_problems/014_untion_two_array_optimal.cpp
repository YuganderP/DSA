// union : add 2 arrays with no duplicates

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 3, 4, 5};
    int brr[] = {2, 3, 4, 5, 6, 7};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    int size_brr = sizeof(brr) / sizeof(brr[0]);
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < size_arr && j < size_brr)
    {
        if (arr[i] <= brr[j])
        {
            if (ans.empty() || ans.back() != arr[i])
            {
                ans.push_back(arr[i]);
            }
            i++;
        }
        else if (arr[i] > brr[j])
        {
            if (ans.empty() || ans.back() != brr[j])
            {
                ans.push_back(brr[j]);
            }
            j++;
        }
        cout << i << " " << j << endl;
    }

    while (i < size_arr)
    {
        if (ans.empty() || ans.back() != arr[i])
        {
            ans.push_back(arr[i]);
        }
        i++;
    }
    while (j < size_brr)
    {
        if (ans.empty() || ans.back() != brr[j])
        {
            ans.push_back(brr[j]);
        }
        j++;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}