#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "Abc";
    m[2] = "cDb";
    m[5] = "hja";
    m.insert({4, "klm"});
    m[5] = "bgb";
    auto it = m.find(5);

    if (it == m.end())
        cout << "No Value" << endl;
    else
        cout << m[5] << endl;

    // print(m);
}

// Time Complexity of Map insert, access, find is O(logn).