#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int valA = max(b,c)+1-a;
        int valB = max(a,c)+1-b;
        int valC = max(a,b)+1-c;


        cout << max(0,valA) << " " << max(0,valB) << " " << max(0,valC) << endl;

    }
}