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

bool isPrime(int N)
{
    long long cnt = 0;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt++;
            if (N / i != i)
            {
                cnt++;
            }
        }
        if (cnt > 2)
            break;
    }

    if (cnt == 2)
        return true;
    else
        return false;
}

vector<int> AllPrimeFactors(int N)
{
    vector<int> primes;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            if (isPrime(i))
            {
                primes.push_back(i);
            }

            if ((N / i) != i)
            {
                if (isPrime(N / i))
                {
                    primes.push_back(N / i);
                }
            }
        }
    }
    return primes;
}

// Logarithmic solution [Time Comp: O(sqrt(N)*logN)]
vector<int> primeFactors(int N){
    vector<int> primes;
    for(int i=2; i*i<=N;i++){
        if(N%i==0){
            primes.push_back(i);
            while(N%i==0) N = N/i;
        }
    }
    if(N != 1) primes.push_back(N);
    return primes;
}

void solve()
{
    ll n;
    cin >> n;

    // vector<int> ans = AllPrimeFactors(n);
    vector<int> ans = primeFactors(n);

    for (auto &it : ans){
        pl it << " ";
    }
    nl;
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