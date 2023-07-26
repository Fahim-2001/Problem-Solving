#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum = 0, count = 0;
    while (1)
    {
        cin >> x;
        if (x == 0)
            break;
        while (count < 5)
        {
            if (x % 2 == 0)
            {
                sum += x;
                count++;
            }
            x++;
        }
        cout << sum << endl;
        sum = 0;
        count = 0;
    }
}