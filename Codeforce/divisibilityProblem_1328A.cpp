#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    long long int a, b;

    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
    }
}