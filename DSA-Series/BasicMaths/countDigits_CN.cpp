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
    int n;
    cin >> n;
    int temp = n, ct = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        if (rem > 0)
        {
            if (n % rem == 0)
            {
                ct++;
            }
        }
        temp /= 10;
    }

    cout << ct << endl;
    return fahim_noob;
}