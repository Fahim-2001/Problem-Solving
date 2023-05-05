#include <bits/stdc++.h>
using namespace std;

int main()
{
    string blinks;
    int sum = 0;

    while (getline(cin, blinks))
    {
        if (blinks == "--*")
            sum += 1;
        else if (blinks == "*--")
            sum += 4;
        else if (blinks == "***")
            sum += 7;
        else if (blinks == "-*-")
            sum += 2;
        else if (blinks == "*-*")
            sum += 5;
        else if (blinks == "**-")
            sum += 6;
        else if (blinks == "-**")
            sum += 3;
        else if (blinks == "---")
            sum += 0;
        if (blinks == "caw caw")
        {
            cout << sum << endl;
            sum = 0;
        }
    }

    return 0;
}