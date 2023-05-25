#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, liked = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            liked++;
        }
    }
    cout << liked << endl;
    return 0;
}