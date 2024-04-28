/*
    Toggle the kth bit of a number's binary.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int ans = n^(1<<k);
    cout << ans << endl;
}