#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k; cin >> n >> k;
    vector<int> arr(n);
    
    ll myCow = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i==k-1){
            myCow = arr[i];
        }
    }
    
    ll maxCow = arr[0], maxCowPos = 0;
    for(int i=1; i<n; i++){
        if(maxCow<arr[i]){
            maxCow = arr[i];
            maxCowPos = i;
        }
    }
    
    ll immdtMxPos = -1, ac = 0;
    bool act = false;
    for(int i=0; i<n; i++){
        if(arr[i]>myCow && i < maxCowPos){
            immdtMxPos=i;
            act = true;
            continue;
        }
        
        if(act){
            ac++;
        }
    }
    
    // if(maxCowPos < k-1){
    //     swap(arr[k-1], arr[maxCowPos]);
    // }
    
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    cout << ac << endl;
}

int main()
{
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}