#include<bits/stdc++.h>
using namespace std;

void swap(int &n, int &m){
    int temp = m; 
    m = n;
    n = temp;
}

void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j = i;
        
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

void recursive_inserstion(int arr[], int i, int n){
    if(i==n) return;

    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }

    recursive_inserstion(arr, i+1, n);
}

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout << "Insertion :-"<< endl;
    // insertion_sort(arr,n);
    cout << "Recursive Insertion :-" << endl;
    recursive_inserstion(arr,0,n);

    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
}