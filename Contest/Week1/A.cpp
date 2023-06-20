#include <bits/stdc++.h>
using namespace std;

void check_valid_prices(int T)
{
    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;

        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; ++i)
        {
            cin >> A[i];
        }

        unordered_set<int> distinct;
        bool isValid = true;

        for (int i = 0; i < 2 * N; ++i)
        {
            if (distinct.find(A[i]) == distinct.end())
            {
                isValid = false;
                break;
            }
            distinct.insert(A[i]);
        }

        if (isValid && distinct.size() == N)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    check_valid_prices(T);
    return 0;
}