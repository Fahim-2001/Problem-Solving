#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
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

#define arrIn(start, n)         \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
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

void solve()
{
    string s;
    cin >> s;
    string ampm = "PM";
    ll a = stoi(s.substr(0, 1));
    ll b = stoi(s.substr(1, 2));
    ll ab = a * 10 + b;

    if (ab == 0)
    {
        s[0] = '1';
        s[1] = '2';
        pl s << " " << "AM" el;
    }
    else if (ab > 12)
    {
        int rem = ab % 12;
        string remStr = to_string(rem);
        if (remStr.size() > 1)
        {
            s[0] = remStr[0];
            s[1] = remStr[1];
        }else{
            s[0] = '0';
            s[1] = remStr[0];
        }
        pl s << " " << "PM" el;

    }else if(ab<12){
        pl s << " " << "AM" el;
    }else{
        pl s << " " << "PM" el;
    }
}

int main()
{
    FAST_IO;
    auto start = high_resolution_clock::now();
    test
    {
        solve();
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return fahim_noob;
}