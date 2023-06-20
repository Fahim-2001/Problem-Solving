#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> list1 = {5, 1, 6, 3, 2, 1};
    forward_list<int> list2 = {9, 1, 10, 3, 5};

    list1.insert(1);
    // list1.sort();
    // list1.unique();

    for (auto elm : list1)
    {
        cout << elm << endl;
    }
}