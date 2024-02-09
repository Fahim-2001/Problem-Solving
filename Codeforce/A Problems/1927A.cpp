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
        string str;
        cin >> str;
        ll black, white;
        black = white = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B')
                black++;
            if (black > 0 && str[i] == 'W')
                white++;
            if (black >= 2 && str[i] == 'B')
            {
                black += white;
                white = 0;
            }
        }
        pl black el;
    }
    return fahim_noob;
}