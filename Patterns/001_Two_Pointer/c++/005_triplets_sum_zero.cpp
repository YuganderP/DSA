#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; j < size; j++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    break;
                }
            }
        }
    }
}