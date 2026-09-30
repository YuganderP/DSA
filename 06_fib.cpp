#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    int j = 1;
    for (int k = 0; k < 10; k++)
    {
        cout << i << " ";
        int temp = i + j;
        i = j;
        j = temp;
    }
}