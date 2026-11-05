#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + sizes);
    int max_con = 1;
    int count = 1;
    for (int i = 1; i < sizes; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;

        if (arr[i] - 1 == arr[i - 1])
        {

            count++;
            max_con = max(count, max_con);
        }
        else
        {
            count = 1;
        }
    }
    cout << max_con;
}