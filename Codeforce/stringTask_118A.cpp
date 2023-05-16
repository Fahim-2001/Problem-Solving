#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u' || a[i] == 'Y' || a[i] == 'y')
        {
            a[i] = 'A';
        }
    }
    a.erase(remove(a.begin(), a.end(), 'A'), a.end());
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    for (int k = 0; k < a.length(); k++)
    {
        cout << "." << a[k];
    }
    cout << endl;

    return 0;
}