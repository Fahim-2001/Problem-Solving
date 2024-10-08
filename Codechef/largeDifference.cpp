#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
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

#define arrIn(start, n)         \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
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
    ll n, k;
    cin >> n >> k;
    if (n < 2) {
        pl 0 el;
        return;
    }
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += (abs(arr[i - 1] - arr[i]));
    }

    ll x = -1, y = -1, difference = LLONG_MAX;

    for (int i = 1; i < n; i++)
    {
        ll d = abs(arr[i - 1] - arr[i]);
        if (d < difference)
        {
            difference = d;
            x = i - 1;
            y = i;
        }
    }
    
    if (arr[x] < arr[y])
    {
        ll nd = abs(1 - arr[y]);
        ll nd2 = abs(k - arr[y]);
        if (nd > nd2)
        {
            arr[x] = 1;
        }
        else
        {
            arr[x] = k;
        }
    }
    else
    {
        ll nd = abs(1 - arr[x]);
        ll nd2 = abs(k - arr[x]);
        if (nd > nd2)
        {
            arr[y] = 1;
        }
        else
        {
            arr[y] = k;
        }
    }

    ll sum2 = 0;
    for (int i = 1; i < n; i++)
    {
        sum2 += (abs(arr[i - 1] - arr[i]));
    }
    pl max(sum, sum2) el;
}

int main()
{
    FAST_IO;
    auto start = high_resolution_clock::now();
    test
    {
        solve();
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return fahim_noob;
}
