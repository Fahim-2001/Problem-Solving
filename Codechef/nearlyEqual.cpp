#include <bits/stdc++.h>
using namespace std;



int main() {
	int tc; cin >> tc;
	while(tc--){
	    int n, m; cin >> n >> m;
	    string a, b; cin >> a >> b;
	    
	    int minHc = INT_MAX;
	    for(int i=0; i+m<=n; i++){
	        int hc = 0;
            string s=a.substr(i,n);
            for(int j=0; j<m; j++){
                if(s[j]!=b[j]){
                    ++hc;
                }
            }
            minHc = min(minHc,hc);
	    }
	    cout << minHc << endl;
	}
}
