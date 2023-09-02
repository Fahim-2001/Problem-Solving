#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos1=0, pos2=0, evenCount=0, oddCount=0;
    cin >> n;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(x%2==0){
            pos1 = i;
            evenCount++;
        }else{
            pos2 = i;
            oddCount++;
        }
    }

    if(oddCount > evenCount){
        cout << pos1 << endl;
    }else{
        cout << pos2 << endl;
    }
    return 0;
}