#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization
    std::array<int, 5> arr;

    // Assigning elements
    arr = {1, 2, 3, 4, 5};

    // Initialization with assigning elements
    std::array<float, 5> arr2 = {1.1, 1.2, 1.3, 1.4, 1.5};

    // Access elements uses:
    // at() [It gives the element of the given index of the array](Standard Way)
    cout << arr.at(3) << endl;

    // [] [It gives the element of the given index of the array](Traditional Way)
    cout << arr2[3] << endl;

    // front() [It gives the first element of the array]
    cout << arr.front() << endl;

    // back() [It gives the last element of the array]
    cout << arr.back() << endl;

    // data() [It gives the pointer of the array]
    cout << "Address of the array: " << arr2.data() << endl;
}