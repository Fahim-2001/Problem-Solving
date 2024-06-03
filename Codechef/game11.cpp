#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;

        if (n < 4 || m < 4 || (n + m < 11))
        {
            cout << "-1" << endl;
            return 0;
        }

        vector<ll> v1(n), v2(m);

        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < m; i++)
            cin >> v2[i];

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        ll j = n - 1, k = m - 1, total = 0;

        for (int i = 0; i < 4; i++)
        {
            total += v1[j--];
        }

        for (int i = 0; i < 4; i++)
        {
            total += v2[k--];
        }

        for (int i = 0; i < 3; i++)
        {
            if (j >= 0 && k >= 0)
            {
                if (v1[j] >= v2[k])
                    total += v1[j--];
                else
                    total += v2[k--];
            }
            else if (j >= 0)
            {
                total += v1[j--];
            }
            else
            {
                total += v2[k--];
            }
        }

        cout << total << endl;
    }
}
