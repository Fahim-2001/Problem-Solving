#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob, count = 0;
    cin >> limak >> bob;

    while (true)
    {
        limak *= 3;
        bob *= 2;
        count++;
        if (limak > bob)
            break;
    }

    cout << count << endl;
    return 0;
}