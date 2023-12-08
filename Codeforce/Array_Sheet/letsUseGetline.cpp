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
    string s;
    getline(cin, s);
    
    // auto it = find(s.begin(), s.end(),"'\'");

    // if(it!=s.end()){
    //     pl "element found at"<< it-s.begin() el;
    // }else{
    //     pl "element not found" el;
    // }
    for(int i=0; i<s.length(); i++){
        if(s[i] == "'\'"){
            pl i el;
        }
    }
    pl s el;
    return fahim_noob;
}