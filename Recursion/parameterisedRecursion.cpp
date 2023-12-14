#include <bits/stdc++.h>
using namespace std;

void doSum(int i, int sum)
{
    if (i < 1)
    {
        cout << "Parameterised : "<<sum << endl;
        return;
    }
    doSum(i - 1, sum + i);
}

int main()
{
    int n ; cin>>n;
    doSum(n, 0);
}

// The parameterized recursion approach involves passing additional parameters to the recursive function to keep track of the current sum and the current number being considered
