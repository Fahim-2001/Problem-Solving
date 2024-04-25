#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            a[i] %= k;
        }
        
        sort(a.begin(), a.end());

        int ans = a.back() - a[0];
        for (int i = 1; i < n; i++) {
            ans = min(ans, a[i-1] + k - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}