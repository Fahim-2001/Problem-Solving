#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n,l; 
    cin >> n >> l;
    double ans=0,maximum=0;
    vector<int>lanterns;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        lanterns.push_back(a);
    }
    sort(lanterns.begin(),lanterns.end());


    for(int i=0,j=1;i<n-1,j<n;i++,j++){
        ans = lanterns[j]-lanterns[i];
        maximum = max(maximum,ans);
    }

    double first = lanterns[0];
    double compare =  maximum/2;
    maximum = max(first,compare);
    double last = l - lanterns[n-1];
    maximum = max(last,maximum);

    print fixed<< setprecision(10)<< maximum nl;
    return fahim_noob;
}