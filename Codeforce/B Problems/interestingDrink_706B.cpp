#include<bits/stdc++.h>
using namespace std;
#define pl cout<<
#define el <<endl
#define nl cout<<endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define fahim_noob 0
#define test int tc;cin>>tc;while(tc--)

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int main(){
    IV p;
    int n;cin>>n;
    for(int i=0; i<n;i++){
        int x;cin>>x;
        p.pb(x);
    }
    sort(p.bn,p.en);

    int q;cin>>q;

    for(int i=0; i<q; i++){
        int x;cin>>x;
        int ans = upper_bound(p.bn, p.en, x) - p.bn;
        pl ans el;
    }
    return fahim_noob;
}