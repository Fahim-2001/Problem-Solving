#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int s,n, win=0;
    cin >> s >> n;
    vector<pair<int,int>>drg;

    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;

        drg.push_back({x,y});
    }

    sort(drg.begin(),drg.end());

    for(int i=0; i<n; i++){
        if(drg[i].first<s){
            s += drg[i].second;
            win++;
        }else{
            break;
        }
    }

    if(win==n)
        print "YES" nl;
    else
        print "NO" nl;

    return fahim_noob;
}