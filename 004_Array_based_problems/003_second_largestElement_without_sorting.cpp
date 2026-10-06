#include <bits/stdc++.h>
using namespace std;
// this is the better / optimal solution
// the time complexity is O N
int main()
{

    // int arr[] = {1, 3, 5, 52, 4, 5, 63, 1, 3, 43, 64, 7, 54};
    int arr[] = {2, 2, 2, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (largest == INT_MIN)
    {
        cout << "Array is empty";
    }
    else if (second_largest == INT_MIN)
    {
        cout << "largest: " << largest << endl;
        cout << "There is no second largest element";
    }
    else
    {
        cout << "largest: " << largest << endl;
        cout << "second largest: " << second_largest << endl;
    }
}