#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int kk = 3;
    int maxs = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i; j < size; j++)
        {
            count += arr[j];
            if (count == kk)
            {
                maxs = max(maxs, j - i + 1);
            }
        }
    }
    cout << maxs;
}