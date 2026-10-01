#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {14, 9, 15, 12, 6, 8, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}