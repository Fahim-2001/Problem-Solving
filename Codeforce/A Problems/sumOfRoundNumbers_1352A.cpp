#include <bits/stdc++.h>
using namespace std;
#define pl cout <<
#define el << endl
#define nl cout << endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define fahim_noob 0

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;

int divisor(int lt)
{
    int divisor = 1;
    for (int i = 1; i < lt; i++)
    {
        divisor *= 10;
    }
    return divisor;
}

IV summands(int n, int lt)
{
    IV list;
    while (n > 0)
    {
        int d = divisor(lt);
        if(n/d!=0){
            list.pb((n / d) * d);
        }
        n = n % d;
        lt--;
    }
    return list;
}

int main()
{
    int tc;cin>>tc;

    while (tc--)
    {
        int number;
        cin >> number;

        string sNumber = to_string(number);
        int length = sNumber.size();
        IV nList = summands(number, length);
        pl nList.size() el;
        for (auto it : nList)
        {
            pl it << " ";
        }
        nl;
    }

    return fahim_noob;
}

/* 
Time complexity analysis : 
    In terms of `n`, the input number, we need to consider how `n` relates to the number of digits (`lt`). The number of digits in `n` is `lt = log10(n) + 1` (base 10 logarithm). 

    So, let's express the time complexity in terms of `n`:

    1. The `divisor` function has a loop that runs for `lt - 1` times, which is `O(lt)`. Since `lt = log10(n) + 1`, the time complexity of the `divisor` function is `O(log n)`.

    2. The `summands` function has a loop that iterates at most `lt` times, which is also `O(lt)` or `O(log n)`.

    3. In the `main` function, the loop iterates `tc` times. The operations inside the loop have a time complexity proportional to the number of digits, which is `O(log n)`.

    Considering these factors, the overall time complexity of the entire code in terms of `n` is `O(tc * log n)`, where `tc` is the number of test cases and `n` is the input number.
*/