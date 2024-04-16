#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define FAST_IO 		(ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define ll 				long long
#define ull             unsigned long long

#define pl 				cout<<
#define el 				<<endl
#define nl 				cout<<endl
#define ff 				first
#define ss 				second
#define in 				insert
#define pb 				push_back
#define ppb 			pop_back
#define bn 				begin()
#define en 				end()
#define all(x) 			x.begin(), x.end()
#define mnel 			min_element
#define mxel 			max_element
#define sz 				size()
#define fahim_noob 		0
#define test int tc;cin>>tc;while(tc--)

#define arrIn(start, n) for (int i = 0; i < n; i++) cin >> arr[i];
typedef vector<int> IV;
typedef vector<ll> LIV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int,int> IMP;
typedef map<ll, ll> LLMP;
typedef map<char, ll> ChLMP;
typedef set<int> ISET;
typedef set<char> ChSET;

class ListNode{
    public:
        int val;
        ListNode *next;
    
    public:
        ListNode(int d, ListNode *n){
            val = d;
            next = n;
        }

    public:
        ListNode(int d){
            val = d;
            next = nullptr;
        }
    
    public:
        ListNode(){
            val = 0;
            next = nullptr;
        }
};


ListNode *convert(IV &arr){
    ListNode *head = new ListNode(arr[0]);

    ListNode *mover = head;

    for(int i=1; i<arr.size();i++){
        ListNode *temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


void traverse(ListNode *head){
    ListNode *temp = head;

    while(temp != nullptr){
        pl temp->val << " ";
        temp = temp->next;
    }
    nl;
}

ListNode* oddEvenList(ListNode* head) {
    if(head == NULL) return NULL;
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* even = slow->next;
    ListNode* firstEven = slow->next;

    while(fast->next != nullptr && even->next !=nullptr){
        ListNode* oddPrev = fast;
        fast = fast->next->next;
        oddPrev->next = fast;

        ListNode* evenPrev = even;
        even = even->next->next;
        evenPrev->next = even;

        slow=slow->next;
    }

    slow->next = firstEven;
    return head;
}

void solve(){
    int n; cin >> n;
    IV arr(n);
    arrIn(0,n);
    ListNode *head = convert(arr);
    traverse(head);
    head = oddEvenList(head);
    traverse(head);
}

int main(){
    FAST_IO;
    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr <<"Time taken: "<< duration.count() <<" ms"<< endl;
    return fahim_noob;
}