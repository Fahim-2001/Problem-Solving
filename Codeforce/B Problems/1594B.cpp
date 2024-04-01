#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
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

#define arrIn(start, n) for (int i = 0; i < n; i++) cin >> arr[i];
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

ll findGcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll findLcm(ll a, ll b) {
    return (abs(a) / gcd(a, b)) * abs(b);
}

void solve(){
    ll n; cin >> n;
    
    if((n&1)==0) {
        pl n/2 <<" "<<n/2 el;
        return;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            pl n/i<<" "<<n-n/i el;
            return;
        }
    }
    pl 1<<" "<<n-1 el;
}

int main(){
    FAST_IO;
    auto start = high_resolution_clock::now();
    test{
        solve();
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr <<"Time taken: "<< duration.count() <<" ms"<< endl;
    return fahim_noob;
}