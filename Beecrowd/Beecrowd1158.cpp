#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, sum = 0, count = 0;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cin >> x >> y;
        do
        {
            if (x % 2 != 0)
            {
                sum += x;
                count++;
            }
            x++;
        } while (count < y);
        cout << sum << endl;
        sum = 0;
        count = 0;
    }
}