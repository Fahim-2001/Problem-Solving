#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, r1, r2, totalArea;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        totalArea = 0;
        cin >> r1 >> r2;
        totalArea = r1 + r2;
        cout << totalArea << endl;
    }
    return 0;
}