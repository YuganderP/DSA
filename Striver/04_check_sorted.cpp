#include <bits/stdc++.h>
using namespace std;
const int size = 6;
int arr[size] = {1, 1, 1, 1, 1, 1};
int main()
{
    int flag = 1;

    for (int i = 0; i < size - 1 && flag == 1; i++)
    {
        (arr[i] <= arr[i + 1]) ? flag = 1 : flag = 0;
    }
    cout << bool(flag);
}