#include <bits/stdc++.h>
using namespace std;
const int size = 5;
int arr[size] = {1, 2, 2, 2, 3};
set<int> m;
int main()
{

    for (int i = 0; i < size; i += 2)
    {
        // cout << i;
        // cout << arr[i] << arr[i + 1];
        m.insert(arr[i]);
    }
    for (auto a : m)
    {
        cout << a;
    }
    cout << endl
         << m.size();
}