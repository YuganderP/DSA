#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    int max_sum = INT_MIN;
    int start_element = 0;
    int index = 0;
    int end_element = 0;
    int current_sum = 0;
    for (int i = 0; i < size_of_arr; i++)
    {
        current_sum += arr[i];

        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            start_element = index;
            end_element = i;
        }
        if (current_sum < 0)
        {
            current_sum = 0;
            index = i + 1;
        }
    }
    cout << max_sum;
    cout << endl;
    cout << start_element << " " << end_element;
}