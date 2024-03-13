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

int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = -1;

        if(n==1) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        if(nums[0]>nums[1]) return 0;

        while(low<=high){
            int mid = low + (high - low)/2;

            if(nums[mid] < nums[mid-1] && nums[mid-1] > nums[mid-2] && mid>0) return ans = mid-1;
            if(nums[mid] > nums[mid-1] && nums[mid]>nums[mid+1]) return ans = mid;

            if(nums[mid]>=nums[mid-1] && nums[mid] < nums[mid+1]){
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
        return ans;
    }

void solve()
{
    int n;
    cin >> n;
    IV v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = findPeakElement(v);
    pl ans el;
}

int main(){
    FAST_IO;
    solve();
    return fahim_noob;
}