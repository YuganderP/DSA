#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 0, 0, 5, 0, 5, 0, 4, 0, 0, 0, 0, 0, 7, 42, 11, 2, 8, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    int i = j + 1;
    while (i < size)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}