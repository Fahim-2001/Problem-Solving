#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    multimap<char, int> CoolMap;

    // Insertion of key and value.
    CoolMap.insert(make_pair('a', 1));
    CoolMap.insert(make_pair('a', 2));
    CoolMap.insert(make_pair('a', 3));
    CoolMap.insert(make_pair('b', 1));
    CoolMap.insert(make_pair('b', 2));

    // erase()
    auto p = CoolMap.begin();
    advance(p, 2);    // Here p is the begining and 2 is the index number.
    CoolMap.erase(p); // Here P means the index 2 element.

    cout << "Loop Through Multimap : " << endl;
    multimap<char, int>::iterator i; // Iterator
    for (i = CoolMap.begin(); i != CoolMap.end(); i++)
        cout << i->first << " " << (*i).second << endl; // i->first and (*i).first are same.

    cout << "Get all the pairs of given key 'a' : " << endl;
    auto range = CoolMap.equal_range('a');

    for (auto i = range.first; i != range.second; ++i)
        cout << i->first << " " << i->second << endl;

    // Uses of Lookup functions;
    cout << "Ammount of key 'b' by COUNT function : " << CoolMap.count('b') << endl;

    cout << "Finding an element through FIND function : " << endl;
    for (auto itr = CoolMap.find('a'); itr != CoolMap.end(); itr++)
        cout << itr->first << " " << itr->second << endl;

    cout << "Size of this Multimap : " << CoolMap.size() << endl;
    cout << "Max Size of this Multimap : " << CoolMap.max_size() << endl;

    // Lower bound
    auto it = CoolMap.lower_bound('a');
    cout << "Lower Bound of 'a' : " << it->first << " " << it->second << endl;

    // Upper bound
    auto it2 = CoolMap.upper_bound('a');
    cout << "Upper Bound of 'a' : " << it2->first << " " << it2->second << endl;
}