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
    int k, r;
    cin >> k >> r;

    int num = 0, i=1;

    while(true){
        num = k * i;
        if(num%10==r || num%10==0){
            break;
        }
        i++;
    }

    pl i el;
    return fahim_noob;
}