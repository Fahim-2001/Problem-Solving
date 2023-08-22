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

    int best=arr[0],worst=arr[0];
    int amazing = 0;

    for(int i=1; i<n; i++){
        if(arr[i]<worst){
            worst = arr[i];
            amazing++;
        }
        if(arr[i]>best){
            best = arr[i];
            amazing++;
        }
    }

    print amazing nl;

    return fahim_noob;
}