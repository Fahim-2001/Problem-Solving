#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int exp1 = a + b * c;
    int exp2 = a * (b + c);
    int exp3 = a * b * c;
    int exp4 = (a + b) * c;
    int exp5 = a + b + c;

    vector<int> v;

    v.push_back(exp1);
    v.push_back(exp2);
    v.push_back(exp3);
    v.push_back(exp4);
    v.push_back(exp5);

    sort(v.rbegin(), v.rend());

    cout << v[0] << endl;

    return 0;
}