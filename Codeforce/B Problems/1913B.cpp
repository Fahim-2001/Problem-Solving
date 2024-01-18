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
        string s;
        cin>>s;
        
        int zeros, ones;
        zeros = ones = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') zeros++;
            else ones++;
        }

        for(int i=0; i<s.size(); i++){
            if(ones==0 && s[i]=='0' || zeros==0 && s[i]=='1') break;
            if(s[i]=='0') ones--;
            else zeros--;
        }

        ll ans = max(zeros, ones);
        pl ans el;
    }
    return fahim_noob;
}