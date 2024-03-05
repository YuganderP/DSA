#include <bits/stdc++.h>
using namespace std;
const int size = 6;
int arr[size] = {1, 1, 2, 3, 4, 5};
int main()
{
    int i = 0;
    int j = 1;
    while (j < size)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];

            // cout << i << j;
        }

        j++;
    }

    for (int k = 0; k <= i; k++)
    {
        cout << arr[k];
    }
}