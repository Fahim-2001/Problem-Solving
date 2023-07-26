#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum = 0, MAX, MIN;
    cin >> x >> y;

    if (x > y)
    {
        MAX = x;
        MIN = y;
    }
    else
    {
        MAX = y;
        MIN = x;
    }

    for (int i = MIN; i <= MAX; i++)
    {
        if (i % 13 != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
}