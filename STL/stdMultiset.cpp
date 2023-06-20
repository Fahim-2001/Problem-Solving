#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    float age;
    string name;

    bool operator<(const Human &rhs) const { return age < rhs.age; }
    bool operator>(const Human &rhs) const { return age > rhs.age; }
};

int main()
{
    // Initialization
    cout << "Normal Multiset with pre-defined data type: " << endl;
    multiset<int, greater<>> Multiset = {1, 1, 2, 3, 3, 4, 5};

    // This insert function inserts element in Multiset.
    Multiset.insert(7);

    // greater<> gives descending order sorting and less<> gives ascending order sorting.
    for (const auto &e : Multiset)
    {
        cout << e << endl;
    }

    // Multiset with user defined datatype :
    cout << "\nMultiset with user defined datatype : " << endl;

    multiset<Human, less<Human>> HumSet = {{30, "Akash"}, {30, "Fahim"}, {35, "Jahid"}, {29, "Bashar"}};
    // greater<> gives descending order sorting and less<> gives ascending order sorting.

    for (const auto &e : HumSet)
    {
        cout << e.age << " " << e.name << endl;
    }
}