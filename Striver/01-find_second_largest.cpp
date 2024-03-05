#include <bits/stdc++.h>
using namespace std;
const int size = 6;
int arr[size] = {3, 2, 1, 5, 2};

int main()
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        max = (max > arr[i] ? max : arr[i]);
    }
    cout << max;
    // we are finding the second largest element in the array
}