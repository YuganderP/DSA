#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 5};
    int n = 5;
    int sum = (n * (n + 1)) / 2;
    int arr_sum = 0;
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i <= size_arr; i++)
    {

        arr_sum += arr[i - 1];
    }

    cout << "missing Number" << sum - arr_sum << endl;
}