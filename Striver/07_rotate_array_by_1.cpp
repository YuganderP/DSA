#include <bits/stdc++.h>
using namespace std;
const int size = 5;
int arr[size] = {1, 2, 3, 4, 5};
int main()
{
    int n = arr[0];
    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = n;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}