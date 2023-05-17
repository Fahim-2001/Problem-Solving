#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    char v[55];

    if (n <= 50 && n >= 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                count++;
            }
        }
    }
    else
    {
        exit(0);
    }

    cout << count << endl;

    return 0;
}