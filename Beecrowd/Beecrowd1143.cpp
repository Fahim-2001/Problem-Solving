#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        cout << x << " " << x * x << " " << x * x * x << endl;
        cout << x << " " << (x * x) + 1 << " " << (x * x * x) + 1 << endl;
    }
}