#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z, j, i, sum = 0;
    cin >> x >> z;

    while (z <= x)
        cin >> z;

    for (i = x, j = 1;; j++, i++)
    {
        sum += i;

        if (sum > z)
            break;
    }
    cout << j << endl;
    return 0;
}