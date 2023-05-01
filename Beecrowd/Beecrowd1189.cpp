#include <bits/stdc++.h>
using namespace std;

int main()
{
    double M[12][12], sum = 0;
    int r, c, n = 1, m = 10;
    char type;

    cin >> type;

    for (r = 0; r < 12; r++)
        for (c = 0; c < 12; c++)
            cin >> M[r][c];

    for (c = 0; c < 5; c++)
    {
        for (r = n; r <= m; r++)
        {
            sum += M[r][c];
        }
        n++;
        m--;
    }

    if (type == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (type == 'M')
        cout << fixed << setprecision(1) << sum / 30 << endl;
}