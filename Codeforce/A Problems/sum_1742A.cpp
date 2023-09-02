#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int arr[3];

    for (int i = 0; i < tc; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3, greater<int>());

        if (arr[0] == arr[1] + arr[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}