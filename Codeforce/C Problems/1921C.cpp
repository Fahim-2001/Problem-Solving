#include <bits/stdc++.h>
using namespace std;
#define pl cout <<
#define el << endl
#define nl cout << endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define fahim_noob 0
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;

    IV m(n);
    for (int i = 0; i < n; i++)
    {
        cin>>m[i];
    }

    int last = 0;
    for (int i = 0; i < n; i++)
    {
        ll on = (m[i] - last) * a;
        ll onOff = b;
        ll consumed = min(on, onOff);
        f -= consumed;
        last = m[i];
    }
    if (f <= 0)
    {
        pl "No" el;
        return;
    }
    pl "Yes" el;
}

int main()
{
    test
    {
        solve();
    }
    return fahim_noob;
}