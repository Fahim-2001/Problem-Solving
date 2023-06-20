#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cin >> x >> y;
        if (x == y)
            cout << "NEUTRAL" << endl;
        else if (x > y)
            cout << "LOSS" << endl;
        else
            cout << "PROFIT" << endl;
    }
    return 0;
}