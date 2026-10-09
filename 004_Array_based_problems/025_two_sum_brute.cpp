#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 6, 5, 8, 11, 2, 6};
    int target = 14;
    int sizes = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizes; i++)
    {
        for (int j = 0; j < sizes; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                return 0;
            }
        }
    }
}