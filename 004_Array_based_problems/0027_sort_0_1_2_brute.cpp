#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 1, 1, 1, 2, 2, 2, 2, 0, 0, 0, 0, 0};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < sizes; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }
    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int j = count_0; j < count_0 + count_1; j++)
    {
        arr[j] = 1;
    }
    for (int j = count_0 + count_1; j < sizes; j++)
    {
        arr[j] = 2;
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}