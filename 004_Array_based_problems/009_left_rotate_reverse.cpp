#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    if (k > size)
    {
        k = k % size;
    }
    if (k != 0)
    {
        reverse(arr, arr + k);
        reverse(arr + k, arr + size);
        reverse(arr, arr + size);
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}