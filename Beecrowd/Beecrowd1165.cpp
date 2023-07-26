#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, number, count;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cin >> number;
        count = 0;
        for (int i = 1; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }

        if (count > 1)
            cout << number << " nao eh primo" << endl;
        else
            cout << number << " eh primo" << endl;
    }
}
