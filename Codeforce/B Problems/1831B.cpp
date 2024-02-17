#include <bits/stdc++.h>
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ll long long
#define ull unsigned long long

#define pl cout <<
#define el << endl
#define nl cout << endl
#define ff first
#define ss second
#define in insert
#define pb push_back
#define ppb pop_back
#define bn begin()
#define en end()
#define all(x) x.begin(), x.end()
#define mnel min_element
#define mxel max_element
#define sz size()
#define fahim_noob 0
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef map<ll, ll> LLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

map<ll, ll> subArraysLengths(LIV &v)
{
    ll lastItem = v[0], ct = 0, maxi = 0;
    map<ll, ll> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == lastItem)
        {
            ct++;
            if (ct > maxi)
            {
                maxi = ct;
            }
        }
        else
        {
            if (mpp[v[i - 1]] < ct)
                mpp[v[i - 1]] = ct;
            lastItem = v[i];
            ct = 1;
        }
    }
    if (mpp[v.back()] < ct)
    {
        mpp[v.back()] = ct;
    }
    return mpp;
}

void solve()
{
    ll n;
    cin >> n;
    LIV v1(n), v2(n);
    set<ll> values;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        values.insert(v1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        values.insert(v2[i]);
    }

    map<ll, ll> mp1 = subArraysLengths(v1);
    map<ll, ll> mp2 = subArraysLengths(v2);

    ll maxi = 0;
    for (auto &it : values)
    {
        ll sum = mp1[it] + mp2[it];
        maxi = max(maxi, sum);
    }
    pl maxi el;
}

int main()
{
    FAST_IO;
    test
    {
        solve();
    }
    return fahim_noob;
}