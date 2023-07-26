#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, petya, vasya, tonya, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}