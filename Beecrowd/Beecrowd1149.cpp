#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, sum = 0;
    cin >> a;

    cin >> n;
    while (1)
    {
        if (n < 0 || n == 0)
            cin >> n;
        else
            break;
    }

    for (int i = a; i < a + n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}