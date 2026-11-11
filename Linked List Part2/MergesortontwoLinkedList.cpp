#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    // Deleting a Linked List
    ~Node()
    {
        //  cout << "~Node " << data << endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }
    // Deleting a Linked List
    // ~List()
    // {
    //     // cout << "~List" << endl;
    //     if (head != NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    // }

    // Push_Front Function
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Push_Back Function
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
};
void print_LL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Merge function to merge the Sorted lists
Node *merge(Node *lefthead, Node *righthead)
{
    List ans;
    Node *i = lefthead;
    Node *j = righthead;
    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while (i != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    while (j != NULL)
    {
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
}
// Split Function to divide the Linked List in parts

Node *split_LL(Node *head)
{
    Node *prev = NULL;
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
    }

    return slow;
}
// Actual Merge Sort Code

Node *merge_sort(Node *head)
{
    if (head == NULL || head->next == NULL) // Base Case
    {
        return head;
    }
    Node *right_head = split_LL(head);
    Node *lefthead = merge_sort(head);
    Node *righthead = merge_sort(right_head);

    return merge(lefthead, righthead);
}

int main()
{
    List ll;
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    cout << "Before Sorting" << endl;
    print_LL(ll.head);
    ll.head = merge_sort(ll.head); // Overwriting old head with new sorted Linked List head
    cout << "After Sorting" << endl;
    print_LL(ll.head);
    return 0;
}
