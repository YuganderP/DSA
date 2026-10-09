#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 5, 6, 8, 11};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int target = 14;
    int j = sizes - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
            break;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}