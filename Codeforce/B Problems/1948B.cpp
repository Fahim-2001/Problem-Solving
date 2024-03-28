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
    ll n;
    cin >> n;
    LIV arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll last = 0;
    bool isSorted = 1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= 10 && (arr[i] / 10) <= (arr[i] % 10) && (arr[i] / 10) >= last)
        {
            last = arr[i] % 10;
            continue;
        }
        if (arr[i] >= last)
        {
            last = arr[i];
            continue;
        }
        isSorted = 0;
    }

    // for(auto &it:arr) pl it <<" ";
    // nl; 

    if (isSorted)
        pl "Yes" el;
    else
        pl "No" el;
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