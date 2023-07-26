#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, k;

    cin >> num >> k;

    for (int i = 1; i <= k; i++)
    {
        if (num % 10 != 0)
            num--;
        else
            num = num / 10;
    }
    cout << num << endl;
}