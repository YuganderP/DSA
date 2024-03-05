#include <bits/stdc++.h>
using namespace std;
const int size = 6;
int arr[size] = {2, 2, 2, 2, 2, 2};
int main()
{
    int smallest = arr[0];
    int sec = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            sec = smallest;
            smallest = arr[i];
        }
        else if (smallest > arr[i] && sec > arr[i])
        {
            sec = arr[i];
        }
    }
    cout << smallest << " " << sec;
}