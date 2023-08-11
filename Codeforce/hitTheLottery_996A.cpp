#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0;

int main()
{
    int n, count = 0;
    cin >> n;

    int arr[5] = {100, 20, 10, 5, 1}, i=0;

    while(n>0){
            count+= n/arr[i];
            n = n%arr[i];
            i++;
    }

    cout << count << endl;

    return fahim_noob;
}