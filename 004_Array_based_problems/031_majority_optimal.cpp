#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 2, 2, 1, 2, 3, 2};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int ele = arr[0];
    int count = 1;
    for (int i = 1; i < sizes; i++)
    {
        if (arr[i] == ele)
            count++;
        else if (arr[i] != ele)
            count--;
        if (count == 0)
        {
            ele = arr[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < sizes; i++)
    {
        if (arr[i] == ele)
            count++;
    }

    if (count > sizes / 2)
        cout << ele << " is the majority element";
    else
        cout << "No majority element";
}
