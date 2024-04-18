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

vector<int> getFrequencies(vector<int> &v)
{
    vector<int> ans;
    map<int, int> mpp;
    for(auto &it: v) mpp[it]++;

    int maxi=INT_MIN, mini=INT_MAX, sm=INT_MAX, lg=INT_MIN;

    for(auto &it:mpp){
        if(it.second>maxi){
            maxi = it.second;
            lg=it.first;
        }
        if(it.second<mini){
            mini = it.second;
            sm = it.first;
        }
    }

    ans.push_back(sm);
    ans.push_back(lg);
    return ans;
}

int main()
{
    int n; cin>>n;
    IV v; 
    for(int i=0; i<n; i++){
        int x;cin>>x;
        v.push_back(x);
    }

    IV ans = getFrequencies(v);

    pl "ANS => ";
    for (auto &it : ans)
        pl it << " ";
    return fahim_noob;
}