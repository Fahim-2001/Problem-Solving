#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    string store = a + b;
    sort(store.begin(),store.end());
    sort(c.begin(),c.end());

    if(store==c)cout << "YES" << endl;
    else cout << "NO" << endl;


    return fahim_noob;
}   