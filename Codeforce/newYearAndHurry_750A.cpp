#include<bits/stdc++.h>
using namespace std;
#define print cout<<
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
    int n,k, solved=0;
    cin >> n >> k;

    for(int i=1; i<=n;i++){
            k += 5*i;
        if(k<=240){
            solved++;
        }
    }
    print solved el;
    return fahim_noob;
}