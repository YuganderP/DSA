// XOR is preferred over n * (n + 1) / 2 because the sum can become very large
// and may cause integer overflow.
//
// XOR operations do not cause arithmetic overflow because they work
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int n = 6;

    int sum_xor = 0;
    int arr_xor = 0;
    int sizeof_arr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i <= sizeof_arr; i++)
    {
        arr_xor ^= arr[i - 1];
        sum_xor ^= i;
    }
    sum_xor ^= n;
    int missing = sum_xor ^ arr_xor;
    cout << missing << endl;
}