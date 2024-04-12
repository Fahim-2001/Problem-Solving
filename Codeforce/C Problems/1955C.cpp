#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
       
        ll i = 0, j = n - 1;
        while(i < j && k > 0) {
            if (v[i] == v[j]) {
                ll s = min(k, (2 * v[i]));
                v[i] -= s / 2;
                v[j] -= s / 2;
                k -= s;
                i++;
                j--;
            } else {
                ll s = min(k, v[i]);
                v[i] -= s;
                k -= s;
                s = min(k, v[j]);
                v[j] -= s;
                k -= s;
                i++;
                j--;
            }
        }
        ll cnt = 0;
        for(ll i=0;i<v.size();i++){
          if(v[i] > 0 and k > 0){
            ll c = v[i];
            v[i] -= k;
            k -= c;
           
          }
        }
        for(auto it:v){
          if(it <= 0) cnt++;
        }
        cout << cnt << '\n';
    }
   
}