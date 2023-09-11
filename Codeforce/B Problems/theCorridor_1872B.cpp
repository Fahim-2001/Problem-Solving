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

int main(){
    test{
        ll n;
        cin >> n;
        ll res = 10e18;
        for(int i=1; i<=n; i++){
            ll rn, at; cin >> rn >> at;
            res = min(res,(2 * rn + at-1)/2);
        }
        pl res el;
    }
    return fahim_noob;
}