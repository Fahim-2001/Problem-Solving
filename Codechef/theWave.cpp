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

void solve(){
    ll n, q; cin >> n >> q;
    LIV v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.bn, v.en);

    for(int i=0; i<q; i++){
        ll x; cin >> x;
        ll ub = lower_bound(v.bn, v.en, x) - v.bn;
        if(v[ub] == x) pl 0 el;
        else if((n-ub)%2==0) pl "POSITIVE" el;
        else pl "NEGATIVE" el;
    }
}

int main(){
    FAST_IO;
    solve();
    return fahim_noob;
}