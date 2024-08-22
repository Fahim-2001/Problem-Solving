// Given an integer n, return the number of prime numbers that are strictly less than n.
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ll long long
#define ull unsigned long long

#define pl cout <<
#define el << endl
#define nl cout << endl
#define ff first
#define ss second
#define in insert
#define pb push_back
#define ppb pop_back
#define bn begin()
#define en end()
#define all(x) x.begin(), x.end()
#define mnel min_element
#define mxel max_element
#define sz size()
#define fahim_noob 0
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define arrIn(start, n)         \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

vector<long long> sieve(long long n)
{
    vector<long long> primes(n + 1);
    for (int i = 2; i < n; i++)
    {
        primes[i] = 1;
    }

    for (int i = 2; i * i < n; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    return primes;
}

int countPrimes(int n)
{
    vector<long long> primes = sieve(n);

    int ct = 0;
    for (int i = 2; i < n; i++)
    {
        if (primes[i] == 1)
        {
            pl i << " ";
            ct++;
        }
    }
    nl;

    return ct;
}

void solve()
{
    int n;
    cin >> n;
    pl countPrimes(n) el;
}

int main()
{
    FAST_IO;
    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return fahim_noob;
}