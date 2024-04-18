#include <bits/stdc++.h>
using namespace std;

void swap(int &n, int &m)
{
    int temp = m;
    m = n;
    n = temp;
}

void bubble_sort(int arr[], int n)
{
    int didSwap = 0; //For Optimization
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}

void recursiveBubbleSort(int arr[], int n) 
{
    if(n==1) return;

	for(int i=0; i<=n-2; i++){
		if(arr[i]>arr[i+1]){
			int temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
		}
	}
	recursiveBubbleSort(arr, n-1);
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

    // cout << "Bubble "<<endl;
    // bubble_sort(arr, n);
    cout <<"Recursive Bubble "<<endl;
    recursiveBubbleSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}