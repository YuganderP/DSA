#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int swaps = 0;
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
        if (swaps == 0)
        {
            break;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}