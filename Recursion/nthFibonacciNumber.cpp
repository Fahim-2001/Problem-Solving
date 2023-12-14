// Example of multiple recursion call
#include <bits/stdc++.h>
using namespace std;

int nthFibo(int n)
{
    if (n <= 1)
        return n;

    int last = nthFibo(n - 1);
    int secondLast = nthFibo(n - 2);

    return last + secondLast;
}

int main()
{
    int n;
    cin >> n;
    cout << nthFibo(n);
}

// We know that nth fibonacci number is to (n-1) + (n-2)
// Multiple recursion calls occur when a recursive function makes more than one recursive call within its definition