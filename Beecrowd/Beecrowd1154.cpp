#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, count = 0, sum = 0;
    float avg;

    while (1)
    {
        cin >> age;
        if (age < 0)
            break;
        else
        {
            sum += age;
            count++;
        }
    }
    avg = float(sum) / float(count);
    cout << fixed << setprecision(2) << avg << endl;
}