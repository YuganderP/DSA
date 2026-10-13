#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    int max_profit = 0;
    int mini = arr[0];
    int maxi = arr[0];
    for (int i = 1; i < size_of_arr; i++)
    {
        int cost = arr[i] - mini;
        if (cost > max_profit)
            max_profit = cost;
        maxi = arr[i];
        mini = min(arr[i], mini);
    }
    cout << max_profit;
    cout << mini;
    cout << maxi;
}