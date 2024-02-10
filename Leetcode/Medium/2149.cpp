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
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

vector<int> rearrangeArray(vector<int> &nums)
{
    int posInd = 0, negInd = 1, n = nums.size();
    vector<int> result(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            result[negInd] = nums[i];
            negInd += 2;
        }
        else
        {
            result[posInd] = nums[i];
            posInd += 2;
        }
    }
    return result;
}

void solve()
{
    IV nums = {3, 1, -2, -5, 2, -4};
    rearrangeArray(nums);
}

int main()
{
    FAST_IO;
    solve();
    return fahim_noob;
}