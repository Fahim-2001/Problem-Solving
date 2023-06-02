#include <bits/stdc++.h>
using namespace std;
#define s size()

int main()
{
    string number1, number2, ans;
    cin >> number1 >> number2;

    if (number1.s == number2.s)
    {
        for (int i = 0; i < number1.s; i++)
        {
            if (number1[i] == number2[i])
            {
                cout << '0';
            }
            else
            {
                cout << '1';
            }
        }
    }
}