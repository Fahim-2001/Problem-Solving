#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int count = 0;

    sort(name.begin(), name.end());

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != name[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
