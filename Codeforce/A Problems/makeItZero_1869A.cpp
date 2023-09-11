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

IV assignVal(IV arr, int sum, int n)
{
    for (int i = 1; i <= n; i++)
    {
        arr[i] = sum;
    }

    return arr;
}

void checkArr(IV arr, int n)
{
    int sum = arr[0] ^ arr[1];
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }
    // if (sum != 0)
    // {
    //     IV arr2 = assignVal(arr, sum, n);
    //     checkArr(arr2, n);
    // }
    pl sum el;
}

int main()
{
    int n;
    cin >> n;
    IV arr;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin >> x;
        arr.pb(x);
    }

    checkArr(arr, n);
    
    return fahim_noob;
}