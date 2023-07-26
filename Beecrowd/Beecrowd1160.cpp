#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, popuA, popuB, years = 0;
    cin >> tc;

    float gr1, gr2;
    for (int i = 1; i <= tc; i++)
    {
        cin >> popuA >> popuB >> gr1 >> gr2;

        if (popuA < popuB && gr1 > gr2)
        {
            years = 0;
            while (1)
            {

                (popuA) = (popuA) + (float(popuA) * gr1) / 100;
                (popuB) = (popuB) + (float(popuB) * gr2) / 100;

                years++;

                if (years >= 101)
                {
                    cout << "Mais de 1 seculo." << endl;
                    break;
                }
                if (popuA > popuB)
                    break;
            }

            if (years < 101)
                cout << years << " anos." << endl;
        }
        else
        {
            cout << "Mais de 1 seculo." << endl;
        }
    }
}