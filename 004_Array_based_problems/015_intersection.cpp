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
        if (arr[i] == brr[j])
        {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}