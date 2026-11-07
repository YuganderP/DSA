#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    sort(arr, arr + size);
    while (i < size - 2)
    {
        int j = i + 1;
        int k = size - 1;
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == 0)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                j++;
                k--;
                // Skip duplicate j values
                while (j < k && arr[j] == arr[j - 1])
                    j++;

                // Skip duplicate k values
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
            else if (arr[i] + arr[j] + arr[k] < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        i++;
    }
}