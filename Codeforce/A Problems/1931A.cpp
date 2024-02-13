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
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    ll n;
    cin >> n;
    ll ops = 2;
    string str = "";
    for (int i = ops; i >= 1; i--)
    {
        if (n > 27)
        {
            str += letters[26-1];
            n = n - 26;
            ops--;
        }
        else
        {
            str += letters[n - ops-1];
            n -= (n - ops);
            ops--;
        }
    }
    if (n != 0)
        str += letters[n-1];

    reverse(str.bn, str.en);
    pl str el;
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