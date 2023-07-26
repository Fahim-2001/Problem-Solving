#include <bits/stdc++.h>
using namespace std;

void maxFront(int arr[], int size, int &max)
{
    int temp;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == max)
        {
            temp = arr[i - 1];
            arr[i - 1] = max;
            arr[i] = temp;
        }
    }
}

void maxMeasure(int arr[], int size, int &max)
{
    if (arr[0] != max)
    {
        maxFront(arr, size, max);
    }
}

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *max = max_element(arr, arr + n);
    int *min = min_element(arr, arr + n);

    while (arr[0] == *max)
    {
        maxMeasure(arr, n, *max);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}