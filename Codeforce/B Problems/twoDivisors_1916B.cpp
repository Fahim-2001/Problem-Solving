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

int LCM(int &n, int &m)
{
    int maxi = max(n, m);
    int mini = min(n, m);

    for (int i = maxi;; i += maxi)
    {
        if (i % mini == 0)
            return i;
    }
}
int main()
{
    test
    {
        int a, b;
        cin >> a >> b;

        int rem = max(a, b) % min(a, b);

        if (rem == 0)
        {
            pl b *(max(a, b) / min(a, b)) el;
        }
        else
        {
            pl LCM(a, b) el;
        }
    }
    return fahim_noob;
}