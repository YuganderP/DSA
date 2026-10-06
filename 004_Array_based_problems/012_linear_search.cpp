#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {56, 45, 2, 23, 4, 56, 7, 3, 23, 34, 5, 5, 57, 2, 2};
    int index = -1;
    int search = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i += 1)
    {
        if (arr[i] == search)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}