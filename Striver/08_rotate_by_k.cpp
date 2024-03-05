#include <bits/stdc++.h>
using namespace std;
const int size = 7;
int arr[size] = {1, 2, 3, 4, 5, 6, 7};
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void optimal(int arr[], int size, int times)
{
    reverse(arr, 0, times - 1);
    reverse(arr, times, size - 1);
    reverse(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int times = 2;
int main()
{

    times = (times % size);
    int zz[size] = {1, 2, 3, 4, 5, 6, 7};
    optimal(zz, size, times);

    int brr[times] = {0};
    cout << "no of times the array to be rotated<< " << times << endl;
    for (int i = 0; i < times; i++)
    {
        brr[i] = arr[i];
    }

    // for (int i = 0; i < times; i++)
    //     cout << brr[i];
    for (int i = (times); i < size; i++)
    {

        arr[i - times] = arr[i];
    }

    int m = 0;
    for (int i = size - times; i < size; i++)
    {
        arr[i] = brr[m];
        m++;
    }
    for (int i = 0; i < size; i++)
        cout << arr[i];

    cout << endl;
}