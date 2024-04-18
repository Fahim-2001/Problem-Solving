#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>> s;

    // Using Array
    // int hashArr[26]={0};
    // for(int i=0; i<s.size(); i++){
    //     hashArr[s[i]-'A']++;
    // }

    // Using Map
    map<int, int> hashArr;
    for(int i=0; i<s.size(); i++){
        hashArr[s[i]-'A']++;
    }


    int q; cin>>q;
    while(q--){
        char c; cin>>c;
        cout << hashArr[c-'A']<<" ";
    }
    cout << endl;
    return 0;
}