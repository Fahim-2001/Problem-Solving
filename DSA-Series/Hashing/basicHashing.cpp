#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Precomputation using Hashing.
    int hashArr[10]={0};
    for(int i=0; i<n; i++){
        hashArr[arr[i]] += 1;
    }

    int q; cin>>q;
    while(q--){
        int num; cin>>num;
        cout << hashArr[num] << endl;
    }
}