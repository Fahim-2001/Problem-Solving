#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10], prev;
    cin >> prev;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = prev;
        prev = prev * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
}