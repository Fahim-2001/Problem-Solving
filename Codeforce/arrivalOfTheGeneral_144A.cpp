#include <bits/stdc++.h>
using namespace std;
#define Noob_coder 0

int findMaxIndex(int arr[], int size){
    int maxIndex = 0;
    for(int i=1; i<size; ++i){
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
    }

    return maxIndex;
}

int findMinIndex(int arr[],int size){
    int minIndex = 0;
    for(int i=1; i<size; ++i){
        if(arr[i]<=arr[minIndex]){
            minIndex = i;
        }
    }

    return minIndex;
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

    int maxi = findMaxIndex(arr,n);
    int mini = findMinIndex(arr,n);
    
    if(maxi>mini)
        mini++;

    
    cout << maxi + (n-1) - mini << endl; 

    return Noob_coder;
}