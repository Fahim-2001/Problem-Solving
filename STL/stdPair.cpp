#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, string>> v_p;
    v_p = {{1, "Yasir"}, {2, "Omar"}, {3, "Fahim"}};

    // Conventional way to declare Iterators.
    // vector<pair<int, string>>::iterator it;

    // for (it = v_p.begin(); it != v_p.end(); ++it)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // Short way to declare Iterators (range based and using auto keyword, reference)

    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    pair<int, string> p;
    p = {4, "Blackhawk"};
    cout << p.first << " " << p.second << endl;
}