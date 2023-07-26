#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, j = 0;
    cin >> num;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;

        if (num == j)
            j = 0;
    }
}