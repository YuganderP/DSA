#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    while (k)
    {
        int temp = arr[0];
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temp;
        k--;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}