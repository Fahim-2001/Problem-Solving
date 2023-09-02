#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0

int main()
{
    int n, m, minimum=0;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    minimum = arr[m-1]-arr[0];
    int ans =0;

    for(int i = n; i<=m; i++){
        ans = arr[i-1] - arr[i-n];
        ans = abs(ans);
        minimum = min(minimum, ans);
    }

    cout << minimum << endl;

    return fahim_noob;
}