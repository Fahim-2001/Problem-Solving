#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp, rem, sum = 0;
    cin >> num;

    temp = num;

    while (temp > 0 || sum > 9)
    {
        if (temp == 0)
        {
            temp = sum;
            sum = 0;
        }
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    return sum;
}