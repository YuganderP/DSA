#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1};
    int maxs = 0;
    int count = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxs = max(count, maxs);
        }
        else if (arr[i] == 0)
        {
            count = 0;
        }
    }
    cout << maxs << endl;
}