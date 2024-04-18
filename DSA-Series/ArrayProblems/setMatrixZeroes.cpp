#include <bits/stdc++.h>
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ll long long
#define ull unsigned long long

#define pl cout <<
#define el << endl
#define nl cout << endl
#define ff first
#define ss second
#define in insert
#define pb push_back
#define ppb pop_back
#define bn begin()
#define en end()
#define all(x) x.begin(), x.end()
#define mnel min_element
#define mxel max_element
#define sz size()
#define fahim_noob 0
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

void printArr(const vector<vector<int>>& arr) {
    for(const auto& row : arr) {
        for(int num : row) {
            pl num <<" ";
        }
        nl;
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    printArr(arr);

    vector<int> rows(m);
	vector<int> cols(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rows[i]==1 or cols[j]==1){
                arr[i][j] = 0;
            }
        }
    }

    printArr(arr);
}

int main()
{
    FAST_IO;
    solve();
    return fahim_noob;
}