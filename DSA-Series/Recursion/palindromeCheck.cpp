#include <bits/stdc++.h>
using namespace std;

bool palindrome(char *arr, int i, int n)
{
    if (i >= n / 2)
        return true;
        
    if (arr[i] != arr[n - i - 1])
        return false;

    return palindrome(arr, i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << palindrome(arr, 0, n);
}