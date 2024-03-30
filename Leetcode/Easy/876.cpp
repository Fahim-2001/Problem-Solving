#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* convert2LL(vector<int> &arr)
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

void traverseLL(ListNode *head)
{
    ListNode *temp = head;

    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Start
int middleIndex(ListNode *head)
{
    ListNode *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        temp = temp->next;
    }
    return ct;
}

ListNode *middleNode(ListNode *head)
{
    if (head == NULL)
        return NULL;
    int midIndex = middleIndex(head);
    midIndex = (midIndex / 2) + 1;

    ListNode *temp = head;
    ListNode *previous;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        if (ct == midIndex)
        {
            break;
        }
        temp = temp->next;
    }
    return temp;
}
// End

void solve()
{
    vector<int> arr ={1,2,3,4,5,6};
    ListNode* head = convert2LL(arr);
    cout << arr.size() << endl;
    traverseLL(head);
    head = middleNode(head);
    traverseLL(head);
}

int main()
{
    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms" << endl;
    return 0;
}