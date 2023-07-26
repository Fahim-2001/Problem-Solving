#include <bits/stdc++.h>
using namespace std;

int main()
{
    double M[12][12], sum = 0;
    int r, c;
    char type;

    cin >> type;

    for (r = 0; r < 12; r++)
        for (c = 0; c < 12; c++)
            cin >> M[r][c];

    for (r = 1; r < 12; r++)
        for (c = 12 - r; c < 12; c++)
            sum += M[r][c];

    if (type == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (type == 'M')
        cout << fixed << setprecision(1) << sum / 66 << endl;
}