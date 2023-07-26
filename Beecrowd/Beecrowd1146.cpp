#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while (1)
    {
        cin >> x;
        if (x == 0)
            break;
        for (int i = 1; i <= x; i++)
        {
            cout << i;
            cout << (i == x ? "\n" : " ");
        }
    }
}