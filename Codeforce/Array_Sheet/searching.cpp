#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n, x;
    cin >> n;
    long long arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> x;

    for(int i=0; i<n; i++){
        if(x==arr[i]){
            print i nl;
            return fahim_noob;
        }         
    }

    print -1 nl;

    return fahim_noob;
}