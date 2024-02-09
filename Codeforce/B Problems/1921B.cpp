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
        ll n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        if (s == f)
        {
            pl 0 el;
            continue;
        }

        ll x, y;
        x = y = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='0' && f[i]=='1')x++;
            else if(s[i]=='1' && f[i]=='0')y++;
        }

        ll ans = min(x,y)+abs(x-y);
        pl ans el;
    }
    return fahim_noob;
}