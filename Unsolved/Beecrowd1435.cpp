#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, layer, hn, a, b;

    while (1)
    {
        cin >> n;
        int A[n][n];

        n = hn / 2;
        if (n % 2 == 1)
        {
            hn++;
        }

        // a = 0;
        // b = n - 1;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                A[n][n] = 1;
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    cout << "   " << A[n][n];
                else
                    cout << "    " << A[n][n];
            }
            cout << endl;
        }
        cout << endl;
    }
}