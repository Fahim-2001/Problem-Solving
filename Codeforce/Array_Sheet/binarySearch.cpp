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

int binarySearch(int arr[], int s, int e, int x)
{
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] == x)
        {
            return arr[m];
        }

        if (arr[m] > x)
        {
            return binarySearch(arr, s, m - 1, x);
        }

        if (arr[m] < x)
        {
            return binarySearch(arr, m + 1, e, x);
        }
    }

    return -1;
}

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < q; i++)
    {
        int d;
        cin >> d;
        int res = binarySearch(arr, 0, n - 1, d);
        if (res == -1)
            pl "not found" el;
        else
            pl "found" el;
    }
    return fahim_noob;
}

