#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int m)
{
    if (m <= 1)
        return false;
    if (m <= 3)
        return true;
    if (m % 2 == 0 || m % 3 == 0)
        return false;

    for (int i = 5; i * i <= m; i++)
    {
        if (m % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    if(n<=1) return 2;

    bool flag = false;
    int p = n;
    while(!flag){
        p++;
        if(isPrime(p)){
            flag = true;
        }
    }

    if (m==p)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}