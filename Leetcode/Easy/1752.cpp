#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int ct = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[(i + 1) % nums.size()])
            ct++;
    }
    if (ct > 1)
        return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << check(nums) << endl;
}