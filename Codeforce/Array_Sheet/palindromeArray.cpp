#include<bits/stdc++.h>
using namespace std;
#define fahim_noob 0
#define print cout<<
#define nl <<endl

int main(){
    int n, count=0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0,j=n-1; i<=n/2,j>=n/2; i++,j--){
        if(arr[i]==arr[j]){
            count++;
        }else{
            break;
        }
    }

    if(count == ceil(double(n)/2)){
       print "YES" nl;
    }else{
        print "NO" nl;
    }

    return fahim_noob;
}