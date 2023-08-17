#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int lowest = arr[1], pos=1;

    for(int i=1; i<=n; i++){
        if(arr[i]<lowest){
            lowest = arr[i];
            pos = i;
        }
    }

    print lowest <<" "<< pos nl;

    return fahim_noob;
}