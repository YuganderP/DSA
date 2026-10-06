#include <bits/stdc++.h>
using namespace std;

//  This is the brute force solution
// the time complexity is O N long N
int main()
{

    int arr[] = {1, 3, 5, 52, 4, 5, 63, 1, 3, 43, 64, 7, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size > 2)
    {
        sort(arr, arr + size);
        cout << "largest element is: " << arr[size - 1];
    }
    else
    {
        cout << "largest element is: " << arr[0];
    }
}