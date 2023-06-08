#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    bool m = false;
    cin >> p;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            m = true;
            break;
        }
    }

    if (m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}