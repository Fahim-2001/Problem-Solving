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
        if(arr[i]>0)
            arr[i]=1;
        if(arr[i]<0)
            arr[i]=2;
    }

    for(int i: arr){
        print i << " ";
    }
    cout nl;
    return fahim_noob;
}