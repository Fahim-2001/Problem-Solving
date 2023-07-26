#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, j = 2, k = 3;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        cout << i << " " << j << " " << k << " PUM" << endl;
        i = i + 4;
        j = j + 4;
        k = k + 4;
    }
}