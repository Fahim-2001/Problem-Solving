#include <bits/stdc++.h>
using namespace std;
#define pl cout <<
#define el << endl
#define nl cout << endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
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

int main()
{
    test
    {
        ll a, b, k1, k2, q1, q2;
        cin >> a >> b >> k1 >> k2 >> q1 >> q2;
        char x[4]={-1,1,-1,1};
        char y[4]={-1,-1,1,1};

        set<pair<ll,ll>> k,q;

        for(int i=0; i<4;i++){
            k.in({k1+a*x[i],k2+b*y[i]});
            k.in({k1+b*x[i],k2+a*y[i]});
            q.in({q1+a*x[i],q2+b*y[i]});
            q.in({q1+b*x[i],q2+a*y[i]});
        }

        ll ans = 0;
        for(auto &it:k){
            if(q.find(it)!=q.end()) ans++;
        }

        pl ans el;
    }
    return fahim_noob;
}