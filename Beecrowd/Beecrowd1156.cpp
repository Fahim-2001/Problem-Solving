#include <bits/stdc++.h>
using namespace std;

int main()
{
    float i, sum = 0, count = 1;
    for (i = 1; i <= 39; i = i + 2)
    {
        sum += i / count;
        count *= 2;
    }
    cout << fixed << setprecision(2) << sum << endl;
}