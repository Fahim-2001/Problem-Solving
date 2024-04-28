#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n; cin >> n;

    ll ldo=0,ldc=0;
    ll rdo=0,rdc=0;
    
    for(int i=1; i<=n; i++){
        ll l, r; cin >> l >> r;
        if(l==1)ldo++;
        else ldc++;

        if(r==1)rdo++;
        else rdc++;
    }

    ll ans = min(ldo,ldc) + min(rdo,rdc);
    cout << ans << endl;
}
