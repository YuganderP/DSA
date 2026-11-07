#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, -2, -1, 0, 1, 2, 3};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;
    int i = 0;
    int j = 0;
    for (auto it : arr)
    {
        if (it < 0)
        {
            neg.push_back(it * it);
            i++;
        }
        else
        {
            pos.push_back(it * it);
            j++;
        }
    }

    int ii = 0;
    int jj = 0;
    if (i == 0)
    {
        for (auto it : pos)
        {
            cout << it << " ";
        }
    }
    else if (j == 0)
    {
        for (auto it : neg)
        {
            cout << it << " ";
        }
    }
    else
    {
        reverse(neg.begin(), neg.end());
        while (ii < i && jj < j)
        {
            if (neg[ii] < pos[jj])
            {
                ans.push_back(neg[ii]);
                ii++;
            }
            else
            {
                ans.push_back(pos[jj]);
                jj++;
            }
        }
        while (ii < i)
        {
            ans.push_back(neg[ii]);
            ii++;
        }
        while (jj < j)
        {
            ans.push_back(pos[jj]);
            jj++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}