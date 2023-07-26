#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, area;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0)
            break;
        area = sqrt(a * b * 100 / c);
        cout << area << endl;
    }
    return 0;
}