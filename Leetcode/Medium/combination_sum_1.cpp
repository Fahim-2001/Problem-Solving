#include <bits/stdc++.h>
using namespace std;

// Solution
void findCombinations(int indx, int target, vector<int> &candidates,
                      vector<int> &combinations,
                      vector<vector<int>> &result)
{
    if (indx == candidates.size())
    {
        if (target == 0)
        {
            result.push_back(combinations);
        }
        return;
    }

    if (candidates[indx] <= target)
    {
        combinations.push_back(candidates[indx]);
        findCombinations(indx, target - candidates[indx], candidates,
                         combinations, result);
        combinations.pop_back();
    }

    findCombinations(indx + 1, target, candidates, combinations, result);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> ds;
    findCombinations(0, target, candidates, ds, result);
    return result;
}
