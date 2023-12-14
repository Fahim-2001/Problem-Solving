// Reverse an array using recursion
#include <bits/stdc++.h>
using namespace std;
void doReverse(int arr[], int l, int r)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);

    doReverse(arr, l + 1, r - 1);
}



int main()
{
    int arr[] = {2, 3, 5, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << size << endl;
    doReverse(arr, 0, size-1);

    for(auto i : arr) cout << i <<" ";
}