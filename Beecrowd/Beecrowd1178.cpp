#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, temp;
    cin >> n;
    temp = n;
    for (int i = 0; i < 100; i++)
    {
        cout << fixed << setprecision(4) << "N[" << i << "] = " << temp << endl;
        temp = temp / 2;
    }
}