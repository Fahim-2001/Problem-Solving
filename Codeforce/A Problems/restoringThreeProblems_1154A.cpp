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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mx = max(a, max(b,max(c,d)));

    int ans = mx/3;

    if(mx==a){
        pl mx-b <<" "<< mx-c <<" "<< mx-d el;
    }else if(mx==b){
        pl mx-a <<" "<< mx-c <<" "<< mx-d el;
    }else if(mx==c){
        pl mx-b <<" "<< mx-a <<" "<< mx-d el;
    }else{
        pl mx-b <<" "<< mx-c <<" "<< mx-a el;
    }

    return fahim_noob;
}