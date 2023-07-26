#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, size;
    string a;

    string arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        arr[i] = a;
    }

    for (int i = 0; i < n; i++)
    {
        size = arr[i].size();
        if (size > 10)
        {
            cout << arr[i].at(0) << size - 2 << arr[i].at(size - 1) << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}