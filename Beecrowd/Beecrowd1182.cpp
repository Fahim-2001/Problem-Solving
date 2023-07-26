#include <bits/stdc++.h>
using namespace std;

int main()
{
    int selectedColumn, r, c;
    double M[12][12], sum = 0.0;
    char type;

    cin >> selectedColumn >> type;

    for (r = 0; r < 12; r++)
        for (c = 0; c < 12; c++)
            cin >> M[r][c];

    for (r = 0; r < 12; r++)
        sum = sum + M[r][selectedColumn];

    if (type == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (type == 'M')
        cout << fixed << setprecision(1) << sum / 12 << endl;
}