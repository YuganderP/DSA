#include <bits/stdc++.h>
using namespace std;
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[low];
        int i = low + 1;
        int j = high;
        while (i <= j)
        {
            while (i <= high && arr[i] <= pivot)
            {
                i++;
            }
            while (j >= low && arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}
int main()
{

    int arr[] = {4, 3, 2, 1, 5, 7, 8, 3, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    quickSort(arr, 0, size - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
