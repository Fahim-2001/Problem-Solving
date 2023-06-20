#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization
    vector<int> myVector;

    // Assigning values
    myVector = {1, 2, 3, 4, 5};

    cout << myVector.capacity() << endl; // Capacity is 5, when it is a initial vector with no push.

    // Use of modifiers.
    // push_back() [It pushes element into the vector]
    myVector.push_back(6);

    cout << "Size:" << myVector.size() << "  Capacity:" << myVector.capacity() << endl; // While pushed a new element the capacity exceeded to doubled than before. It is 10.

    // New vector
    vector<int> vec;
    // Example of capacity getting doubled
    cout << "Example of getting doubled :" << endl;

    for (int i = 0; i < 32; i++)
    {
        vec.push_back(i);
        cout << "Size:" << vec.size() << "  Capacity:" << vec.capacity() << endl;
    }

    // Increasing capacity double everytime takes more time to execute. So that to solve this issue reserve() function is used to reserve a initial size for the declared vector.Then if it needs to increase it can increase its size itself.
    cout << "Example of getting a reserve size: " << endl;

    vector<int> vec2;
    vec2.reserve(1000);
    for (int i = 0; i < 32; i++)
    {
        vec2.push_back(i);
        cout << "Size:" << vec2.size() << "  Capacity:" << vec2.capacity() << endl;
    }
}