#include <bits/stdc++.h>
using namespace std;
#define print cout <<
#define nl << endl
#define ll long long
#define fahim_noob 0

int main()
{

    ll arr[1000000] = {0};
    for (ll i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (ll j = 2; i * j <= 1000000; j++)
            {
                arr[i * j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    ll int x, root;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        root = sqrt(x);

        if (x == 1)
        {
            print "No" nl;
        }
        else if (root * root == x && arr[root] == 0)
        {
            print "YES" nl;
        }
        else
        {
            print "NO" nl;
        }
    }
    return fahim_noob;
}