/*
Find that either ith bit set or not
That means ith bit of given number's binary is 1 or 0.
If 1 then it's set or non-set.
*/ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    cout << "Using Left Shift : ";
    if ((n & (1 << k)) != 0)
    {
        cout << "Set" << endl;
    }
    else
    {
        cout << "Non Set" << endl;
    }

    cout << "Using Right Shift : ";
    if (((n >> k) & 1) != 0)
    {
        cout << "Set" << endl;
    }
    else
    {
        cout << "Non Set" << endl;
    }
}
