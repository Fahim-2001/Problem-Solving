#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[72][72], n, i, j, k;

    while (scanf("%d", &n) != EOF)
    {
        k = n - 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == k)
                    arr[i][j] = 2;
                else if (i == j)
                    arr[i][j] = 1;
                else
                    arr[i][j] = 3;
            }
            k--;
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}