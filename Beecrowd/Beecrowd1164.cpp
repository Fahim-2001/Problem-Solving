#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, number, sum = 0, divisors = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cin >> number;
        while (divisors < number)
        {
            if (number % divisors == 0)
            {
                sum = sum + divisors;
            }
            divisors++;
        }
        if (sum == number)
            cout << number << " eh perfeito" << endl;
        else
            cout << number << " nao eh perfeito" << endl;
        divisors = 1;
        sum = 0;
    }
}