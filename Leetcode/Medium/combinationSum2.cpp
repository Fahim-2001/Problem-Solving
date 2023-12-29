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

void combinations(int ind, int target, vector<int> &candidates,
                  vector<int> &combination, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(combination);
        return;
    }

    for (int i = ind; i < candidates.size(); i++)
    {
        if (i > ind && candidates[i] == candidates[i - 1])
            continue;
        if (candidates[i] > target)
            break;
        combination.push_back(candidates[i]);
        combinations(ind + 1, target - candidates[i], candidates, combination, result);
        combination.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> combination;
    sort(candidates.begin(),candidates.end());
    combinations(0, target, candidates, combination, result);
    for(int i=0; i<result.size();i++){
        for(auto it: result[i]){
            pl it << " ";
        }nl;
    }
    return result;
}

int main(){
    int n; cin >> n;
    IV v = {1,1,1,2,2};
    combinationSum2(v, 4);
}