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
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll tents = 0;
    tents += a;

    tents += b / 3;
    b %= 3;

    int flag = 0;
    if (b == 1)
    {
        if (c >= 2)
        {
            tents += 1;
            c -= 2;
        }
        else
        {
            flag = 1;
        }
    }
    else if (b == 2)
    {
        if (c > 0)
        {
            tents += 1;
            c--;
        }
        else
        {
            flag = 1;
        }
    }

    if (c % 3 == 0)
    {
        tents += c / 3;
    }
    else
    {
        tents += c / 3 + 1;
    }

    if (flag == 1)
        pl - 1 el;
    else
        pl tents el;
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