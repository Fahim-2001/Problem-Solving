#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int sum = 0;

    while (tc--)
    {
        string c;
        cin >> c;

        if (c == "Tetrahedron")
        {
            sum += 4;
        }
        else if (c == "Cube")
        {
            sum += 6;
        }
        else if (c == "Octahedron")
        {
            sum += 8;
        }
        else if (c == "Dodecahedron")
        {
            sum += 12;
        }
        else if (c == "Icosahedron")
        {
            sum += 20;
        }
    }

    cout << sum << endl;

    return 0;
}