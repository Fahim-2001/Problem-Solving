#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, i, j;
    cin >> x >> y;

    for (i = 1; i <= y; i + x)
    {
        for (j = 1; j <= x; j++)
        {
            if (i > y)
                break;
            else
                cout << i++ << " ";
        }
        cout << "\n";
    }
}