#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 0, 0, 1, 1, 1, 1, 3, 3};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int maxs = 0;
    int find = 3;
    int sum = arr[0];
    int num_of_sub_arrays = 0;
    while (j < sizes)
    {
        while (i <= j && sum > find)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == find)
        {
            maxs = max(maxs, j - i + 1);
        }
        j++;
        if (sum <= find && j < sizes)
        {
            sum += arr[j];
        }
    }
    cout << maxs;
}