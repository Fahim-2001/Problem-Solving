#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            cout << "Ho!" << endl;
        else
            cout << "Ho ";
    }
    return 0;
}