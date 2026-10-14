#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    next_permutation(arr, arr + sizes);
    for (auto it : arr)
    {
        cout << it << endl;
    }
}