#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] <= 10)
        {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}