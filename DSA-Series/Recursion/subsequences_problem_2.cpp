// Find subarrays whose sum is equal to given sum.

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

void print(IV &vec)
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
bool subseq(int index, IV &old, IV &newVec, int newSum, int sum)
{
    if (index >= old.size())
    {
        if (sum == newSum)
        {
            print(newVec);
            return true;
        }
        return false;
    }

    newVec.push(old[index]);
    newSum += old[index];
    // pl newSum el;
    if(subseq(index + 1, old, newVec, newSum, sum)==true) return true;
    newVec.pop();
    newSum -= old[index];
    // pl newSum el;
    if(subseq(index + 1, old, newVec, newSum, sum)==true)return true;
    return false;
}
int main()
{
    IV vec{3, 1, 2}, emptyVec;
    int sum = 3;
    subseq(0, vec, emptyVec, 0, sum);
    return fahim_noob;
}