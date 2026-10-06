#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int brr[size] = {};
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            brr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        brr[i + j] = 0;
    }
    for (auto it : brr)
    {
        cout << it << " ";
    }
}