#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 5};
    int n = 5;
    int flag = 0;
    int missing = -1;
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 0; j < size_arr; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            missing = i;
            break;
        }
    }
    cout << missing << endl;
}