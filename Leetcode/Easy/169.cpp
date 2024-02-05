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

// Optimal Solution : Using Boyer-moore's Voting Algorithm.
int majorityElement(vector<int> &nums)
{
    int candidate, ct = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (ct == 0)
            candidate = nums[i];
        if (candidate == nums[i])
            ct++;
        else
            ct--;
    }

    ct = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (candidate == nums[i])
            ct++;
    }

    if (ct > (nums.size() / 2))
        return candidate;
    return -1;
}

int main()
{
    IV nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return fahim_noob;
}