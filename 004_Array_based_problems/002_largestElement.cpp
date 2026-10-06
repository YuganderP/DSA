#include <bits/stdc++.h>
using namespace std;
// this is the better / optimal solution
// the time complexity is O N
int main()
{

    int arr[] = {1, 3, 5, 52, 4, 5, 63, 1, 3, 43, 64, 7, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
}