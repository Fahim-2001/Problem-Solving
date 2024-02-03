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
typedef unordered_map<int, int> UIMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int countOps(string str, int n)
{
    int a = n, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            a = min(i, a);
        }
        if (str[i] == 'B')
        {
            b = max(i, b);
        }
    }

    if(a>b) return 0;
    
    return b-a;
}
int main()
{
    test
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int result = countOps(str, n);
        pl result el;
    }
    return fahim_noob;
}