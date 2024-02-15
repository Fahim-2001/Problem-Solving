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
typedef map<ll, ll> LLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, ll> charFreq;
    for (int i = 0; i < s.size(); i++)
        charFreq[s[i]]++;

    ll ct = 0;
    for (auto &it : charFreq)
    {
        if (it.second % 2 != 0)
        {
            ct++;
        }
    }

    if (k >= ct - 1)
        pl "YES" el;
    else
        pl "NO" el;
}

int main()
{
    FAST_IO;
    test { solve(); }
    return fahim_noob;
}