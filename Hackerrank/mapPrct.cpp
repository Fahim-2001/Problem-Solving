#include <bits/stdc++.h>
using namespace std;

void addValues(map<string, int> &m, string x, int y)
{
    m[x] += y;
}

void eraseValue(map<string, int> &m, string x)
{
    m.erase(x);
}

void printValue(map<string, int> &m, string x)
{
    map<string, int>::iterator it;
    it = m.find(x);
    if (it != m.end())
        cout << m[x] << endl;
    else
        cout << 0 << endl;
}

int main()
{
    map<string, int> m;
    int queries, type;
    cin >> queries;

    while (queries--)
    {
        cin >> type;

        string a;
        int b;
        if (type == 1)
        {
            cin >> a >> b;
            addValues(m, a, b);
        }
        if (type == 2)
        {
            cin >> a;
            eraseValue(m, a);
        }
        if (type == 3)
        {
            cin >> a;
            printValue(m, a);
        }
    }

    return 0;
}