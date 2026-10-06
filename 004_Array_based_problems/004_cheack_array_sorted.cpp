#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool loop = true;
    int arr[] = {1, 2, 3, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 2; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
        else
        {
            loop = false;
        }
    }
    if (loop)
    {
        cout << " sorted";
    }
    else
    {
        cout << " not sorted";
    }
}