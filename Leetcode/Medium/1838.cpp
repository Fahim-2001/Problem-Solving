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

int maxFrequency(vector<int> &nums, int k)
{
    int maxi = *max_element(nums.begin(), nums.end()), i = 0;
    while (k > 0)
    {
        int ops = maxi - nums[i];
        if (ops <= k)
        {
            k -= ops;
            nums[i] = nums[i] + ops;
        }
        i++;
    }

    map<int, int> hashArr;
    for (int i = 0; i < nums.size(); i++)
        hashArr[nums[i]]++;

    int maxVal = INT_MIN;
    for (auto &it : hashArr)
    {
        if (it.second > maxVal)
        {
            maxVal = it.second;
        }
    }
    return maxVal;
}

int main()
{
    IV nums = {9930, 9923, 9983, 9997, 9934, 9952, 9945, 9914, 9985, 9982, 9970, 9932, 9985, 9902, 9975, 9990, 9922, 9990, 9994, 9937, 9996, 9964, 9943, 9963, 9911, 9925, 9935, 9945, 9933, 9916, 9930, 9938, 10000, 9916, 9911, 9959, 9957, 9907, 9913, 9916, 9993, 9930, 9975, 9924, 9988, 9923, 9910, 9925, 9977, 9981, 9927, 9930, 9927, 9925, 9923, 9904, 9928, 9928, 9986, 9903, 9985, 9954, 9938, 9911, 9952, 9974, 9926, 9920, 9972, 9983, 9973, 9917, 9995, 9973, 9977, 9947, 9936, 9975, 9954, 9932, 9964, 9972, 9935, 9946, 9966};
    int k = 3056;

    pl maxFrequency(nums, k) el;
    return fahim_noob;
}