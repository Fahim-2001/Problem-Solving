#include<bits/stdc++.h>
using namespace std;
#define fahim_noob 0;

int solution(int k, int l, int m, int n, int d){
    int count = 0;
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l ==0 || i%m==0 || i%n==0)
            count++;
    }
    return count;
}

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    cout << solution(k,l,m,n,d) << endl;

    return fahim_noob;
}