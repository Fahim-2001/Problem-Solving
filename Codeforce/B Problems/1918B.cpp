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
    int n; cin>>n;
    VIP p;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        p.pb({x,0});
    }

    for(auto &it: p){
        int x; cin>>x;
        it.second = x;
    }

    sort(p.bn, p.en);

    for(auto &it: p){
        pl it.first <<" ";
    }
    nl;
    for(auto &it: p){
        pl it.second <<" ";
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