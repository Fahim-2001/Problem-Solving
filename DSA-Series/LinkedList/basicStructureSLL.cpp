#include <bits/stdc++.h>
using namespace std;
/*
    Here we can use "Struct" keyword as well but it
    give us the OOP features like abstraction, inheritance,
    encapsulation and polymorphism.
*/
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
} // TC-> O(n)

void traverseLL(Node *head)
{
    // Node *head = convertArr2LL(arr);
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
} // TC-> O(n);

int lengthOfLL(Node *head)
{
    Node *temp = head;
    int ct = 0;
    while (temp)
    {
        temp = temp->next;
        ct++;
    }
    return ct;
} // TC-> O(n)

string searchElementInLL(Node *head, int value)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == value)
            return "Found";
        temp = temp->next;
    }
    return "Not Found";
} // TC-> O(n)

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        if (ct == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeEl(Node *head, int val)
{
    if (head == NULL)
        return head;
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        if (temp->data == val)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertElementIntoHead(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);
    Node *temp = new Node(val, head);
    return temp;
} // TC -> O(n)

Node *insertElementIntoTail(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;

    return head;
}

Node *insertElementAtK(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(val);
        else
            return NULL;
    }

    if (k == 1)
    {
        return new Node(val, head);
    }

    Node *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        if (ct == k - 1)
        {
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertElement(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == val)
    {
        return new Node(el, head);
    }

    Node *temp = head;
    
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node *newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {21, 3, 4, 7};

    // Node* x = new Node(arr[0], nullptr); // Declaration type 1(Preferred)
    // cout << x->data <<" "<< x->next << endl;

    // Node a = Node(arr[1], nullptr); // Type 2
    // cout << a.data <<" "<< a.next<< endl;

    Node *head = convertArr2LL(arr);

    traverseLL(head);

    // cout << "After Deleting Head : ";
    // head = deleteHead(head);
    // traverseLL(head);

    // cout << "After Deleting tail : ";
    // head = deleteTail(head);
    // traverseLL(head);

    // cout << "After removing kth pos  element : ";
    // head = removeK(head, 2);
    // traverseLL(head);

    // cout << "After removing k element : ";
    // head = removeEl(head, 3);
    // traverseLL(head);

    // cout << "After adding k into head : ";
    // head = insertElementIntoHead(head, 1);
    // traverseLL(head);

    // cout << "After adding k into tail : ";
    // head = insertElementIntoTail(head, 31);
    // traverseLL(head);

    // cout << "After adding an element into Kth position : ";
    // head = insertElementAtK(head, 15, 4);
    // traverseLL(head);

    cout << "After adding an element into Kth position : ";
    head = insertElement(head, 15, 3);
    traverseLL(head);

    cout << "Length of the LL : " << lengthOfLL(head) << endl;
    cout << "Find an element in LL : " << searchElementInLL(head, 4) << endl;
}