#include <bits/stdc++.h>
using namespace std;
#define print cout <<
#define nl << endl
#define fahim_noob 0

int main()
{
    int n, untreated = 0, treated = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if (e < 0 && treated==0)
        {
            untreated++;
        }
        else
        {
            treated += e;
        }
    }

    print untreated nl;
    return fahim_noob;
}