#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, sum = 0;
    cin >> tc;
    int arr[tc];

    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b;

        sum = (sum - a) + b;
        arr[i] = sum;
    }

    cout << *max_element(arr, arr + tc) << endl;
}