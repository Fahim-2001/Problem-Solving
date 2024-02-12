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
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    map<ll, ll> freqs;
    for (auto &i : arr)
        freqs[i]++;

    vector<ll> ans;
    for (auto &it : freqs)
        if (it.second > 1)
            ans.pb(it.first);

    if (ans.size() < 2)
    {
        pl "-1" el;
        return;
    }

    for (auto &it : arr)
    {
        if (it == ans[0])
        {
            ans[0] = -1;
            pl "2"
                << " ";
        }
        else if (it == ans[1])
        {
            ans[1] = -1;
            pl "3"
                << " ";
        }
        else
        {
            pl "1"
                << " ";
        }
    }
    nl;
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