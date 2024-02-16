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
typedef set<int> ISET;
typedef set<char> ChSET;

void solve(){
    ll n; cin >> n;
    LIV v1(n), v2(n);

    for(ll i=0; i<n; i++){
        cin >> v1[i];
    }

    for(ll i=0; i<n; i++){
        cin >> v2[i];
    }

    sort(all(v1));
    sort(all(v2));

    ll miniTotalOfV1 ,miniTotalOfV2;
    miniTotalOfV1 = miniTotalOfV2 = 0;

    for(ll i =0; i<n; i++) miniTotalOfV1 += (v1[i] + v2[0]);
    for(ll i =0; i<n; i++) miniTotalOfV2 += (v2[i] + v1[0]);

    pl min(miniTotalOfV1, miniTotalOfV2) el;
}

int main(){
    FAST_IO;
    test{
        solve();
    }
    return fahim_noob;
}