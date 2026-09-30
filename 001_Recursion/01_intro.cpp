#include <bits/stdc++.h>
using namespace std;
void sample(int n)
{
    if (n > 5)
    {
        return;
    }
    else
    {
        cout << n;
        sample(n + 1);
    }
}
int main()
{
    sample(0);
}