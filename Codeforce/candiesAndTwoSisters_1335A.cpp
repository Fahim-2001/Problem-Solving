#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n, a, b, count=0;
        cin >> n;
        a=n-1;
        b=n-a;

        while(a>b){
            a--;
            b++;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}