#include <bits/stdc++.h>
using namespace std;
int fr(int i)
{
    if (i < 1)
    {
        return 1;
    }
    else
    {
        return i * fr(i - 1);
    }
}
main()
{
    cout << fr(5);
}