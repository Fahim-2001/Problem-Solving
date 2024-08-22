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

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll>b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    ll ct = 0;
    for(int i=0,j=0; i<a.size(), j<n; i++,j++){
        if(a[i]>b[j]){
            a.insert(a.begin()+i, b[i]);
            ct++;
        }
    }

    // for(auto &it: a){
    //     pl it <<" ";
    // }nl;

    // for(auto &it: b){
    //     pl it <<" ";
    // }nl;

    pl ct el;

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