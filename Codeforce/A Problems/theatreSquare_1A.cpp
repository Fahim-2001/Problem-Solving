#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, p, q;
    cin >> n >> m >> a;

    if (m % a == 0)
        p = m / a;
    else
        p = (m / a) + 1;

    if (n % a == 0)
        q = n / a;
    else
        q = (n / a) + 1;

    cout << (p * q) << endl;

    return 0;
}