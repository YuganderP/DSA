#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 7, 11, 15};
    int find = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == find)
        {
            cout << "Found: " << arr[i] << " + " << arr[j] << " = " << find << endl;
            break;
        }
        else if (arr[i] + arr[j] < find)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}