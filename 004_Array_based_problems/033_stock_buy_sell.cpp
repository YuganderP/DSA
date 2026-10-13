#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {7, 1, 5, 3, 6, 4};
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    int buy = 0;
    int best_buy = 0;
    int best_sell = 0;
    int sell = 0;
    int max_profit = INT_MIN;
    for (int i = 0; i < size_of_arr; i++)
    {
        buy = arr[i];
        for (int j = i + 1; j < size_of_arr; j++)
        {
            sell = arr[j];
            if (sell - buy > max_profit)
            {
                best_buy = buy;
                best_sell = sell;
                max_profit = sell - buy;
            }
        }
    }

    cout << "Best Buy: " << best_buy << endl;
    cout << "Best Sell: " << best_sell << endl;
    cout << "Max Profit: " << max_profit << endl;
}