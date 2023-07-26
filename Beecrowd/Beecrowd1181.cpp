#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    char t;
    double N[12][12];
    double sum = 0.0;

    cin >> l;
    cin >> t;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> N[i][j];
            if (i == l)
            {
                sum += N[i][j];
            }
        }
    }

    if (t == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 12.0);
    return 0;
}