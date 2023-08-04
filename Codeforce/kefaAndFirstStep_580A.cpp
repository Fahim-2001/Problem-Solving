#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0

int main()
{
    int n, count = 0, maxValue = 1;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i <n; i++)
    {
        if (a[i - 1] <= a[i])
        {
            count++;
            maxValue = max(maxValue,count);
        }
        else
        {
            count = 1;
        }
    }

    cout << maxValue << endl;

    return fahim_noob;
}