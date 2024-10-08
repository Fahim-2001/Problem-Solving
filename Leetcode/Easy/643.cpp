#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
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

#define arrIn(start, n)         \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
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

double findMaxAverage(vector<int> &nums, int k)
{
    ll n = nums.size();
    double sum = 0;
    for (int i = 0; i < k; i++)
        sum += nums[i];

    double maxSum = sum;
    
    ll l = 0, r = k - 1;
    while (r < n - 1)
    {
        sum -= nums[l];
        l++;
        r++;
        sum += nums[r];
        cout << sum << endl;
        maxSum = max(sum, maxSum);
    }

    double result = maxSum / k;
    return result;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    IV arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    double res = findMaxAverage(arr, k);
    cout << fixed << setprecision(5) << res << endl;
}

int main()
{
    FAST_IO;
    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return fahim_noob;
}