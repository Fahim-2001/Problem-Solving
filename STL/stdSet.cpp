#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    float age;
    string name;

    // Comparator Function (Ascending)
    bool operator<(const Person &rhs) const { return age < rhs.age; }

    // Comparator Function (Descending)
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main()
{
    cout << "Set : " << endl;

    // Initialization of Set
    set<int> Set = {1, 2, 4, 3, 5, 1, 2, 4, 9, 5};
    for (const auto &e : Set)
    {
        cout << e << endl;
    }

    cout << "\nComparision of Objects : " << endl;
    // Ascending and descending order comparision of objects of set.

    set<Person, greater<>> PSet = {{21, "Fahim"},
                                   {25, "Asiq"},
                                   {20, "Mushfiq"}};
    // When you use greater<> it will sorted in descending order and when you use less<> it will sorted in ascending order.

    for (const auto &e : PSet)
    {
        cout << e.age << " " << e.name << endl;
    }
}