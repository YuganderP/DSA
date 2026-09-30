#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int i, int n)
{
    if (i >= n)
    {
        return;
    }
    else
    {
        swap(arr[i], arr[n]);
        reverseArray(arr, i + 1, n - 1);
    }
}

main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}