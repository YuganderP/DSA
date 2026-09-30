#include <bits/stdc++.h>
using namespace std;
void pr(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    int temp = i;
    pr(i - 1, sum + temp);
}
int main()
{
    pr(3, 0);
}