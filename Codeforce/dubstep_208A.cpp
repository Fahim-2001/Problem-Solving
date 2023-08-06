#include<bits/stdc++.h>
using namespace std;
#define fahim_noob 0

int main(){
    string word ;
    cin >> word;

    for(int i=0; i<word.size(); i++){
        if(word[i]=='W'&&word[i+1]=='U'&&word[i+2]=='B'){
            i = i+2;
            cout << " ";
        }else{
            cout << word[i];
        }
    }
    cout << endl;
    return fahim_noob;
}
