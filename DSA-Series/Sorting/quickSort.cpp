#include <bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end) {
	int pivot = input[start], i=start, j=end;
	while(i<j){
		while(input[i]<=pivot && i<end){i++;}
		while(input[j]>pivot && j>start){j--;}
		if(i<j){
			swap(input[i], input[j]);
		}
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int partition = partitionArray(input,start,end);
		quickSort(input, start, partition-1);
		quickSort(input, partition + 1, end);
	}
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

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
