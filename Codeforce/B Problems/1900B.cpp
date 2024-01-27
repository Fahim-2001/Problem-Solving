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
        int a, b, c;
        cin >> a >> b >> c;

        if((b + c) % 2 == 0) cout << "1 ";
		else cout << "0 ";
		if((a + c) % 2 == 0) cout << "1 ";
		else cout << "0 ";
		if((a + b) % 2 == 0) cout << "1 ";
		else cout << "0 ";
        cout << endl;
    }
    return fahim_noob;
}