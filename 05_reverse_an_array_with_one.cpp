#include <bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    else
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse_array(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}