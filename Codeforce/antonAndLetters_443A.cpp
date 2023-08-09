#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0;

int main()
{
    set<char> s;

    char a;
    cin >> a;

    while (true)
    {
        cin >> a;
        if (a == '}')
            break;
        s.insert(a);
    }
    s.extract(',');

    cout<<s.size()<<endl;

    cout << endl;

    return fahim_noob;
}