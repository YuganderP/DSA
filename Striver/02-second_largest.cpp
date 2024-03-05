#include <iostream>
using namespace std;
const int size = 6;
int arr[size] = {-1, 3, -2, 0, -3, 0};
int main()
{
    int largest = arr[0];
    int second = INT_FAST32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {

            second = largest;

            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << largest << " " << second;
}