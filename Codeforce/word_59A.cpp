#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int upper = 0, lower = 0;

    cin >> word;

    if (word.length() >= 1 && word.length() <= 100)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[i]))
            {
                upper++;
            }
            else
            {
                lower++;
            }
        }

        if (upper > lower)
        {
            transform(word.begin(), word.end(), word.begin(), ::toupper);
        }
        else
        {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
        }
        cout << word << endl;
    }
    else
    {
        exit(0);
    }
}