#include <bits/stdc++.h>
using namespace std;
int upperBound(int target, vector<int> &v)
{
    int n = v.size();
    int low = 0, high = n - 1, ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (v[mid] <= target)
        {
            low = mid + 1;
        }
    }

    return ans;
}

int selfMadeBound(int target, vector<int> &v)
{
    int n = v.size();
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] < target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (v[mid] >= target)
        {
            high = mid - 1;
        }
    }

    return ans + 1;
}

vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int start = selfMadeBound(target, nums);
    int end = upperBound(target, nums);

    vector<int> result;
    for (int i = start; i < end; i++)
    {
        result.push_back(i);
    }
    return result;
}
