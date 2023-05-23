#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, res, count = 0;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        cin >> res;
        if (res == 1)
        {
            count++;
        }
    }

    if (count > 0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}