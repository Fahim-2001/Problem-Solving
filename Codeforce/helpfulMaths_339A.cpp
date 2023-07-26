#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    vector<int> numVec;
    cin >> a;
    stringstream grab(a);

    int num;

    while (grab >> num)
    {
        if (num > 0 && num < 4)
        {
            numVec.push_back(num);
        }
        else
        {
            return 0;
        }
    }

    sort(numVec.begin(), numVec.end());

    for (int i = 0; i < numVec.size(); i++)
    {
        (numVec.size() > 0) ? ((i == (numVec.size() - 1)) ? cout << numVec[i] << endl : cout << numVec[i] << "+") : cout << i << endl;
    }

    return 0;
}