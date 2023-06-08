#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A = "I hate ";
    string B = "that I love ";
    string C = "that I hate ";

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i > 1)
        {
            A += B;
        }
        else if (i % 2 != 0 && i > 1)
        {
            A += C;
        }
    }
    cout << A << "it" << endl;
    return 0;
}