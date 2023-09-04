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

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;

int main()
{
    IV v;
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    ll int c= v[0]-1;
    for(int i=0; i<k-1; i++){
        if(v[i]>v[i+1]){
            c+= n-(v[i]-v[i+1]);
        }else if(v[i]<v[i+1]){
            c+= v[i+1]-v[i];
        }
    }

    pl c el;
    return fahim_noob;
}