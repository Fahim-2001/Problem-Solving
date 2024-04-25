/*
Clear the kth bit of given number's binary.
That means make it zero.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    cout <<"Using Left Shift : ";
    int ans = n & (~(1<<k));
    cout << ans << endl;
    
    cout << "Using Right Shift : ";
    ans = (n>>k) & 0;
    cout << ans << endl;
}