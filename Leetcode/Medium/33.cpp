#include <bits/stdc++.h>
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ll long long
#define ull unsigned long long

#define pl cout <<
#define el << endl
#define nl cout << endl
#define ff first
#define ss second
#define in insert
#define pb push_back
#define ppb pop_back
#define bn begin()
#define en end()
#define all(x) x.begin(), x.end()
#define mnel min_element
#define mxel max_element
#define sz size()
#define fahim_noob 0
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int search(vector<int> &arr, int k)
{
    int maxElement = *max_element(arr.begin(), arr.end());
    auto maxInd = find(arr.begin(), arr.end(), maxElement) - arr.begin();

    int ans = -1;
    if (maxInd == arr.size() - 1)
    {
        int low = 0, high = maxInd;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k)
            {
                ans = mid;
                break;
            }
            else if (arr[mid] > k)
            {
                high = mid - 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
        }
    }
    else
    {
        int low1 = 0, high1 = maxInd;
        while (low1 <= high1)
        {
            int mid = low1 + (high1 - low1) / 2;
            if (arr[mid] == k)
            {
                ans = mid;
                break;
            }
            else if (arr[mid] > k)
            {
                high1 = mid - 1;
            }
            else
            {
                low1 = mid + 1;
            }
        }

        if (ans == -1)
        {
            int low2 = maxInd + 1, high2 = arr.size() - 1;
            while (low2 <= high2)
            {
                int mid = low2 + (high2 - low2) / 2;
                if (arr[mid] == k)
                {
                    ans = mid;
                    break;
                }
                else if (arr[mid] > k)
                {
                    high2 = mid - 1;
                }
                else
                {
                    low2 = mid + 1;
                }
            }
        }
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    IV v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = search(v, k);
    pl ans el;
}

int main()
{
    FAST_IO;
    solve();
    return fahim_noob;
}