#include <bits/stdc++.h>
using namespace std;
#define print cout <<
#define nl << endl
#define ll long long
#define fahim_noob 0

int main()
{

    ll arr[1000000] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                arr[i * j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;

        ll int root = sqrt(x);

        if (x == 1)
            print "No" nl;
        else if ((pow(root, 2) == x) && (arr[root] == 0))
            print "YES" nl;
        else
            print "NO" nl;
    }
    return fahim_noob;
}