/*
Make the ith bit set that means 1 of given number's binary.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = n | (1 << k);
    cout << "Using Left Shift : " << ans << endl;
    ans = (n >> k) | 1;
    cout << "Using Right Shift : " << ans << endl;
}