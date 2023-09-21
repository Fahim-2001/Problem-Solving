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
    test{
        int n;cin>>n;
        int oddSum=0, evenSum = 0;

        IV even, odd;
        int o=1,e=2;
        for(int i=1; i<=n; i++){
            if(i%2 != 0){
                oddSum+=i;
                odd.pb(i);
            }else{
                evenSum+=i;
                even.pb(i);
            }
        }
        
        while(true){
            int x = odd.back();
            oddSum -= x;
            odd.pop_back();
            oddSum += (x+2);
            odd.pb(x+2);
            
            if(oddSum==evenSum){
                break;
            }
            if(oddSum>evenSum){
                break;
            }
        }

        // pl odd.back() el;

        // pl evenSum<<" "<< oddSum el;
        if(evenSum != oddSum){
            pl "No" el;
        }else{
            pl "Yes" el;
            for(auto e: even)
                pl e << " ";
            for(auto e: odd)
                pl e << " ";
            nl;
        }
    }
    return fahim_noob;
}