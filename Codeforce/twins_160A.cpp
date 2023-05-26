#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, sumOfTotal = 0, count = 0, j = 0;
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        sumOfTotal += vec[i];
    }

    while (true)
    {
        sort(vec.rbegin(), vec.rend());

        sum += vec[j];
        j++;

        count++;

        if (sum > (sumOfTotal / 2))
        {
            break;
        }
    }

    cout << count << endl;
}