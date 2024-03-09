#include<bits/stdc++.h>
using namespace std;
#define FAST_IO 		(ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define ll 				long long
#define ull             unsigned long long

#define pl 				cout<<
#define el 				<<endl
#define nl 				cout<<endl
#define ff 				first
#define ss 				second
#define in 				insert
#define pb 				push_back
#define ppb 			pop_back
#define bn 				begin()
#define en 				end()
#define all(x) 			x.begin(), x.end()
#define mnel 			min_element
#define mxel 			max_element
#define sz 				size()
#define fahim_noob 		0
#define test int tc;cin>>tc;while(tc--)

typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

ll ans(ll a, ll x, ll b, ll y, ll n){
    ll p1 = max(x, a-n);
    n = n - (a-p1);
    ll p2 = max(y, b-n);
    return p1 * p2;
}

void solve(){
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ans1 = ans(a, x, b, y, n);
    ll ans2 = ans(b, y, a, x, n);
    pl min(ans1, ans2) el;
}

int main(){
    FAST_IO;
    test{
        solve();
    }
    return fahim_noob;
}