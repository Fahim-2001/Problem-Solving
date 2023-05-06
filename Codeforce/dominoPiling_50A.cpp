#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, ammount = 0;

    cin >> m >> n;

    if (m >= 1 && m <= 16 && n >= 1 && n <= 16)
    {
        ammount = (m * n) / 2;
    }

    cout << ammount << endl;

    return 0;
}