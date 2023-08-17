#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n;
    long long sum=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    print abs(sum) nl;

    return fahim_noob;
}