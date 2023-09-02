#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define nl <<endl
#define fahim_noob 0

int main(){
    int n,m, count=0;
    cin >> n >> m;

    for(int r=1; r<=n;r++){
        for(int c=1; c<=m; c++){
            if(r%2!=0){
                print "#";
            }else{
                if(c==m && count ==1){
                    print "#";
                    count=0;
                }
                else if(c==1 && count ==2){
                    print"#";
                    count = -1;
                }
                else{
                    print(".");
                }
            }
        }
        cout<<endl;
        count++;
    }
    return fahim_noob;
}