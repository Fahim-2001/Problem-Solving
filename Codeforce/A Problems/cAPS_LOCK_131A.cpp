#include <bits/stdc++.h>
using namespace std;
#define fahim_noob 0;

int main()
{
    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (islower(str[i]))
            count++;
    }

    if (islower(str[0]) && count==1)
    {
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
        return fahim_noob;     
    }


    if (count == 0)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }else{
        cout << str << endl;
    }
    
    return fahim_noob;
}