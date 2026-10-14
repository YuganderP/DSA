#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizes; i++)
    {
        for (int j = 0; j < sizes; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            for (int k = 0; k < sizes; k++)
            {
                if (arr[j] == arr[k] || arr[i] == arr[k])
                    continue;
                else
                {
                    cout << arr[i] << arr[j] << arr[k];
                    cout << endl;
                }
            }
        }
    }
}