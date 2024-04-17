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

class ListNode
{
public:
    int val;
    ListNode *next;

public:
    ListNode(int d, ListNode *n)
    {
        val = d;
        next = n;
    }

public:
    ListNode(int d)
    {
        val = d;
        next = nullptr;
    }

public:
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
};

ListNode *convert(IV &arr)
{
    ListNode *head = new ListNode(arr[0]);

    ListNode *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traverse(ListNode *head)
{
    ListNode *temp = head;

    while (temp != nullptr)
    {
        pl temp->val << " ";
        temp = temp->next;
    }
    nl;
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL)
        return NULL;

    ListNode *p1= head;
    ListNode *p2= head;
    while (n--)
    {
        p1 = p1->next;
    }

    if(p1 == NULL) return head->next;

    while (p1->next != nullptr)
    {
        p1 = p1->next;
        p2 = p2->next;
    }

    ListNode *target = p2->next;
    p2->next = p2->next->next;
    delete target;

    return head;
}

void solve()
{
    int n, p;
    cin >> n >> p;
    IV arr(n);
    arrIn(0, n);
    ListNode *head = convert(arr);
    traverse(head);
    head = removeNthFromEnd(head, p);
    traverse(head);
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