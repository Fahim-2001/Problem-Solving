#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, anton = 0, danik = 0;
    char player;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> player;
        if (player == 'A')
        {
            anton++;
        }
        if (player == 'D')
        {
            danik++;
        }
    }
    if (anton > danik)
        cout << "Anton" << endl;
    else if (anton == danik)
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;
}