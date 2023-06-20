#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string s;
        cin >> s;

        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        bool ch = 1;
        for (auto e : m)
        {
            if (e.second % 2 == 1)
            {
                cout << "NO\n";
                ch = 0;
                break;
            }
        }
        if (ch)
            cout << "YES\n";
    }
    return 0;
}