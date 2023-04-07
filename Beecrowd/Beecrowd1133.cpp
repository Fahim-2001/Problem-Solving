#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, MIN, MAX;
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

    for (int i = MIN + 1; i < MAX; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            cout << i << endl;
        }
    }
}