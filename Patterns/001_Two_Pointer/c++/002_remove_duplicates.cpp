#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
    while (j < size)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        else
        {
            j++;
        }
    }
    j = i;
    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }
}