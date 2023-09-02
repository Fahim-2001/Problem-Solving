#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tc, n;
    cin >> tc;

    for(int i=0; i<tc;i++){
        cin >> n;
        vector<pair<int,int>> vp;
        for(int i=0; i<n; i++){
            int w, v;
            cin >> w >> v;
            vp.push_back({w,v});
        }

        long long mx=INT_MIN, pos;

        for(int i=0; i<vp.size(); i++){
            if(vp[i].first <=10 && vp[i].second > mx){
                mx = vp[i].second;
                pos = i;
            }
        }
        cout << pos + 1 << endl;
    }
}