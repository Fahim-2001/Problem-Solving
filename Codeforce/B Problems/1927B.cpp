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
void solve(){
    ll n, m, k;
        cin >> n >> m >> k;
        unordered_map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp1[a]++;
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            mp2[a]++;
        }

        int c1 = 0, c2 = 0;
        int flag = 0;
        for (int i = 1; i <= k; i++)
        {
            flag = 0;
            if (mp1[i])
            {
                flag = 1;
                c1++;
            }
            if (mp2[i])
            {
                flag = 1;
                c2++;
            }
            if (flag == 0)
            {
                cout << "No" << endl;
                return;
            }
        }
        if (c1 >= k / 2 && c2 >= k / 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
}
int main()
{
    test
    {
        solve();
    }

    return fahim_noob;
}