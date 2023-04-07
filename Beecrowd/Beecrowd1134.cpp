#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice, alco = 0, gaso = 0, diesel = 0;

    while (1)
    {
        cin >> choice;
        if (choice == 1)
            alco++;
        else if (choice == 2)
            gaso++;
        else if (choice == 3)
            diesel++;
        else if (choice == 4)
        {
            cout << "MUITO OBRIGADO" << endl;
            cout << "Alcool: " << alco << endl;
            cout << "Gasoline: " << gaso << endl;
            cout << "Diesel: " << diesel << endl;
            break;
        }
        else
        {
            continue;
        }
    }
}