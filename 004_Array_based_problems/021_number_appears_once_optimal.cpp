#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int sum_xor = 0;
    for (auto it : arr)
    {
        sum_xor ^= it;
    }
    cout << sum_xor << endl;
}