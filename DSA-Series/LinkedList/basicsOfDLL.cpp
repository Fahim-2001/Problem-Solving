#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next->next == NULL)
        {
            temp->next->back = nullptr;
            delete temp->next;
            temp->next = nullptr;
        }
        temp = temp->next;
    }
    return head;
}

void traverseDLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 5, 1, 7};
    Node *head = convertArr2DLL(arr);
    traverseDLL(head);

    // head = deleteHead(head);
    // traverseDLL(head);

    head = deleteTail(head);
    traverseDLL(head);
}