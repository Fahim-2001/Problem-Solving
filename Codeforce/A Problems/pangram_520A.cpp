#include <bits/stdc++.h>
using namespace std;
#define begin word.begin()
#define end word.end()
#define wsize word.size()
#define fahim_noob 0

int main()
{
    int size, count=0;
    cin >> size;

    string word;
    cin >> word;

    if ( wsize != size)
    {
        exit(0);
    }

    transform(begin, end, begin, ::tolower);
    sort(begin,end);

    for (int i = 0; i < wsize; i++)
    {
        if (word[i] != word[i + 1])
        {
            count++;
        }
    }

    if (count == 26)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return fahim_noob;
}