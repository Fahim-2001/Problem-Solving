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
#define test int tc;cin>>tc;while(tc--)

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int main(){
    int n;
    cin>>n;
    vector<int>a(n-1);
    for(int i=0; i<n-1; i++){
        cin>>a[i];
    }

    int xor1, xor2;
    xor1=xor2=0;
    
    for(int i=0; i<n-1; i++){
        xor1 = xor1^a[i];
        xor2 = xor2^(i+1);
    }
    xor2=xor2^n;
    pl (xor2^xor1) el;
    
    return fahim_noob;
}