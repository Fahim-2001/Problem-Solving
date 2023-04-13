#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 3, first = 0, second = 1, next;
    cout << first << " " << second << " ";
    while (i <= n)
    {
        next = first + second;
        if (i == n)
            cout << next << endl;
        else
            cout << next << " ";
        first = second;
        second = next;
        i++;
    }
}