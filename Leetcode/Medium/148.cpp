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

vector<int> convertToArr(ListNode* head){
    ListNode* temp = head;
    vector<int> arr;
    while(temp!=nullptr){
        arr.push_back(temp->val);
        temp = temp->next;
    }

    return arr;
}

// int partitionArray(vector<int> &input, int start, int end) {
// 	int pivot = input[start], i=start, j=end;
// 	while(i<j){
// 		while(input[i]<=pivot && i<end){i++;}
// 		while(input[j]>pivot && j>start){j--;}
// 		if(i<j){
// 			swap(input[i], input[j]);
// 		}
// 	}
// 	swap(input[start], input[j]);
// 	return j;
// }

// void quickSort(vector<int> &input, int start, int end) {
// 	if(start<end){
// 		int partition = partitionArray(input,start,end);
// 		quickSort(input, start, partition-1);
// 		quickSort(input, partition + 1, end);
// 	}
// }

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

ListNode* sortList(ListNode* head) {
    if(head==NULL) return NULL;

    vector<int> arr = convertToArr(head);
    merge_sort(arr,0,arr.size()-1);
    ListNode* newHead = convert(arr);
    return newHead;
}



void solve(){
    int n; cin >> n;
    IV arr(n);
    arrIn(0,n);
    ListNode *head = convert(arr);
    traverse(head);
    head = sortList(head);
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