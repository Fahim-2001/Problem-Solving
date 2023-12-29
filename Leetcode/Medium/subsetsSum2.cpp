#include <bits/stdc++.h>
using namespace std;
#define pl cout <<
#define el << endl
#define nl cout << endl
#define in insert
#define push push_back
#define pop pop_back
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

void print(IV vec)
{
    int ct = 0;
    pl "[";
    for (int i = 0; i < vec.size(); i++)
    {
        pl vec[i];
        ct++;
        if (i < vec.size() - 1) // Space Printing till second last index.
            pl ",";
    }
    pl "]" el;
}

void subseq(int index, IV &old, IV &newVec, set<vector<int>> &subsets)
{
    if (index >= old.size())
    {
        sort(newVec.begin(), newVec.end());
        subsets.insert(newVec);
        return;
    }
    newVec.push(old[index]);
    subseq(index + 1, old, newVec, subsets);
    newVec.pop();
    subseq(index + 1, old, newVec, subsets);
}
int main()
{
    set<vector<int>> subSets;
    IV vec{4,4,4,1,4}, emptyVec;
    vector<vector<int>> uniqueSubsets;
    subseq(0, vec, emptyVec, subSets);
   
   for( auto it=subSets.begin(); it!=subSets.end(); it++){
        
        uniqueSubsets.push_back(*it);
        print(*it);
   }

    for(int i=0; i<uniqueSubsets.size(); ++i){
        for(auto it: uniqueSubsets[i]){
            pl it << " ";
        }nl;
    }

    return fahim_noob;
}