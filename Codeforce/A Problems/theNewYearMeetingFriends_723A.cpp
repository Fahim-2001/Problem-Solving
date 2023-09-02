#include<bits/stdc++.h>
using namespace std;
#define pl cout<<
#define el <<endl
#define nl cout<<endl
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
typedef map<int,int> IMP;
typedef set<int> ISET;

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    int d1 = abs(x-y);
    int d2 = abs(y-z);
    int d3 = abs(x-z);

    IV d;
    d.pb(d1);
    d.pb(d2);
    d.pb(d3);

    sort(d.bn,d.en);

    pl d[0]+d[1] el;
    
    return fahim_noob;
}