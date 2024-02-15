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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n == 1 && k > 0)
    {
        s = "0";
        pl s el;
        return;
    }

    if (k != 0)
    {
        if (s[0] > '1')
        {
            s[0] = '1';
            k--;
        }

        for (int i = 1; i < s.size(); i++)
        {
            if (k == 0)
                break;

            if (s[i] > '0')
            {
                s[i] = '0';
                k--;
            }
        }
    }
    pl s el;
}

int main()
{
    FAST_IO;
    solve();
    return fahim_noob;
}