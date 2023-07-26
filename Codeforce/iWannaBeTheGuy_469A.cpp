#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    int n, x, count = 0;
    cin >> n;

    int p, q;
    cin >> p;
    if (p <= n)
    {
        for (int i = 0; i < p; i++)
        {
            cin >> x;
            vec.push_back(x);
        }
    }

    cin >> q;
    if (q <= n)
    {
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            vec.push_back(x);
        }
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != vec[i + 1])
        {
            count++;
        }
    }

    if (n == count)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}