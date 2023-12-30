#include <bits/stdc++.h>
using namespace std;

void findPermutations(int ind, vector<int> &nums,
                      vector<vector<int>> &result)
{
    if (ind == nums.size())
    {
        result.push_back(nums);
        return;
    }

    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        findPermutations(ind + 1, nums, result);
        swap(nums[ind], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> result;
    findPermutations(0, nums, result);
    return result;
}