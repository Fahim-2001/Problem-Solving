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

ll newBinarySearchInTown(int x, IV &p){
    ll n = p.sz;
    ll l = 0, r = n;
    while(r-l != 1){
        ll m = l + (r-l)/2;
        if(p[m]<=x) l = m;
        else r = m;
    }
    return l;
}

void solve(){
    ll n, x; cin >> n >> x;
    IV arr(n);
    arrIn(0,n);

    ll l = newBinarySearchInTown(x, arr);

    ll s = 0;
    for(int i=0; i<n;i++){
        if(arr[i]==x){
            s = i;
        }
    }
    
    if(l==s){
        pl 0 el;
    }else{
        pl 1 el;
        pl s+1 <<" "<< l+1 el;
    }
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