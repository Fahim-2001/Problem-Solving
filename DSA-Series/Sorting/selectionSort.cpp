#include <bits/stdc++.h>
using namespace std;

void swap(int &n, int &m)
{
    int temp = m;
    m = n;
    n = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void recursive_selection(int arr[], int i, int n)
{
    if (i == n)
        return;

    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }
    swap(arr[i], arr[min]);
    recursive_selection(arr, i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << "Selection" << endl;
    // selection_sort(arr, n);
    cout << "Recursive Selection" << endl;
    recursive_selection(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}