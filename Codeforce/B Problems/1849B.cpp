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

bool comp(pair<ll,ll>a, pair<ll,ll>b){
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    LIV arr(n);

    LIV result;
    vector<pair<ll, ll>> vp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if (arr[i]%k <= 0)
        {
            result.pb(i + 1);
        }else{
            vp.pb({arr[i]%k, i+1});
        }
    }


    sort(all(vp), comp);

    for(auto [x,y]:vp){
        result.pb(y);
    }

    for (auto &it : result)
    {
        pl it << " ";
    }
    nl;
}

int main()
{
    FAST_IO;
    test
    {
        auto start = high_resolution_clock::now();
        solve();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        cerr << "Time taken to execute the program: " << duration.count() << " milliseconds" << endl;
    }
    return fahim_noob;
}