#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w, h = "hello";
    int match = 0, j = 0;

    cin >> w;

    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] == h[j])
        {
            match++;
            j++;
        }
    }

    if (match == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}