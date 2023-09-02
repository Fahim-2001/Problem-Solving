#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    string op;
    transform(op.begin(), op.end(), op.end(), ::toupper);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> op;
        if (op == "++X")
        {
            ++x;
        }
        if (op == "X++")
        {
            x++;
        }
        if (op == "--X")
        {
            --x;
        }
        if (op == "X--")
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}