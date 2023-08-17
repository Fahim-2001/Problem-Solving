#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    reverse(arr,arr+n);

    for(auto i: arr){
        print i << " ";
    }
    cout nl;
    
    return fahim_noob;
}