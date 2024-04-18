#include <bits/stdc++.h>
using namespace std;

int doSum(int n)
{
    if (n == 0)
        return 0;
    return n + doSum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Functional : " << doSum(n) << endl;
    return 0;
}

// Recursive Function is a function that repeats or uses its own previous term to calculate subsequent terms and thus forms a sequence of terms.