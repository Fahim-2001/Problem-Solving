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
    ll n;
    cin >> n;
    if (n == 1)
    {
        pl - 1 el;
        return;
    }

    IV ans(n+1);
    ll size = n;
    for (int i = 1; i<=size; i++)
    {
        ans.at(i) = n;
        n--;
    }

    for (int i = 1; i <=size; i++)
    {
        if (i == ans[i])
        {
            swap(ans[i], ans[i + 1]);
        }
        
        if(ans[ans[i]] != i){
            pl -1 el;
            return;
        }
    }

    for (int i = 1; i <ans.size(); i++)
    {
        pl ans[i] << " ";
    }
    nl;
}

int main()
{
    FAST_IO;
    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return fahim_noob;
}