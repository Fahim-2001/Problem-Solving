#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0

void recNumber(int n)
{ // Recursion
    if (n == 0)
        return;
    cout << n << " ";
    recNumber(n - 1);
}

void btNumber(int i, int n)
{ // Backtracking
    if (i > n)
        return;
    btNumber(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    cout << "Recursion : ";
    recNumber(n);
    cout << endl;

    cout << "Backtracking : ";
    btNumber(1, n);
    cout << endl;

    return fahim_noob;
}