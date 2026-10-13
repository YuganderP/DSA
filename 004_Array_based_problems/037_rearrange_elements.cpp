#include <bits/stdc++.h>
using namespace std;
// #the positive and negative counts are same

int main()
{
    int arr[] = {1, 2, 3, -1, -2, 4, -3, 5};
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    int brr[size_of_arr];
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < size_of_arr; i++)
    {
        if (arr[i] < 0)
        {

            brr[neg] = arr[i];
            neg += 2;
        }
        else
        {
            brr[pos] = arr[i];
            pos += 2;
        }
    }
    for (auto it : brr)
    {
        cout << it << " ";
    }
}