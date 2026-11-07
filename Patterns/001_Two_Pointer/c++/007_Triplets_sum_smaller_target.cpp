#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-4, -2, -1, 0, 1, 2, 3, 5, 7};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int count = 0;
    while (i < size - 2)
    {
        int j = i + 1;
        int k = size - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < target)
            {
                count += (k - j);
                j++;
            }
            else
            {
                k--;
            }
        }
        i++;
    }
    cout << count;
}