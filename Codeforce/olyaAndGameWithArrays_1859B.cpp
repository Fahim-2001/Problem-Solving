#include <bits/stdc++.h>
using namespace std;
#define print cout <<
#define nl << endl
#define in insert
#define pb push_back
#define b begin()
#define e end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define fahim_noob 0

void solve()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<vector<ll>> vArr;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            vector<ll> v;
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                ll a;
                cin >> a;
                v.pb(a);
            }
            sort(v.b, v.e);
            vArr.pb(v);
        }

        ll firstMin = 1e10;
        ll secMin = 1e10;
        for (int i = 0; i < vArr.sz; i++)
        {
            firstMin = min(firstMin, vArr[i][0]);
            secMin = min(secMin, vArr[i][1]);
        }

        ll minSum = 0, flag = 0;
        for (int i = 0; i < vArr.sz; i++)
        {
            if (vArr[i][1] == secMin && flag == 0)
                flag++;
            else
                minSum += vArr[i][1];
        }

        minSum += firstMin;
        print minSum nl;
    }
}

int main()
{

    solve();

    return fahim_noob;  
}