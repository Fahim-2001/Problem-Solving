#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, steps = 0;
    cin >> x;

    steps = x / 5;
    if (x % 5 > 0)
        steps++;

    cout << steps << endl;
}