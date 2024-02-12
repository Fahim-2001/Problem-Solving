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
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void nextPermutation(vector<int>& A) {
        long long ind = -1;
        long long n = A.size();

        for(int i = n-2; i>=0; i--){
            if(A[i]<A[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1) {
            reverse(A.begin(), A.end());
        }else{
            for(int i = n-1; i>ind; i--){
                if(A[i]>A[ind]){
                    swap(A[i], A[ind]);
                    break;
                }
            }
            reverse(A.begin()+ind+1, A.end());
        }
    }

void solve(){
    int n; cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    nextPermutation(A);
}

int main(){
    FAST_IO;
    solve();
    return fahim_noob;
}