#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define el <<endl
#define nl cout<<endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define fahim_noob 0

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef set<int> ISET;

void bubbleSort(int arr[],int size){
    for(int i=0; i<size-1;i++){
        for(int j=0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        print arr[i] << " ";
    }
    nl;
    return fahim_noob;
}