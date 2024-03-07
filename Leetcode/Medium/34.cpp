#include<bits/stdc++.h>
using namespace std;
#define FAST_IO 		(ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define ll 				long long
#define ull             unsigned long long

#define pl 				cout<<
#define el 				<<endl
#define nl 				cout<<endl
#define ff 				first
#define ss 				second
#define in 				insert
#define pb 				push_back
#define ppb 			pop_back
#define bn 				begin()
#define en 				end()
#define all(x) 			x.begin(), x.end()
#define mnel 			min_element
#define mxel 			max_element
#define sz 				size()
#define fahim_noob 		0
#define test int tc;cin>>tc;while(tc--)

typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int lastOccurence(vector<int> &v, int k)
{
    int n = v.size();
    int low = 0, high = v.size() - 1;

    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (v[mid] > k)
        {
            high = mid - 1;
        }
        else if (v[mid] < k)
        {
            low = mid + 1;
        }
    }
    if (ans == n)
        ans = -1;
    return ans;
}

int firstOccurence(vector<int> &v, int k)
{
    int n = v.size();
    int low = 0, high = v.size() - 1;

    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (v[mid] < k)
        {
            low = mid + 1;
        }
        else if (v[mid] > k)
        {
            high = mid - 1;
        }
    }
    return ans;
}
void solve(){
    
}

int main(){
    FAST_IO;
    solve();
    return fahim_noob;
}




