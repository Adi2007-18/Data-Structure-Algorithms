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
    ~List()
    {
        // cout << "~List" << endl;
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

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

    // Remove Cycle from Linked List
    void remove_Cycle()
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;
        bool isCycle = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "Cycle present :)" << endl;
                isCycle = true;
                break;
            }
        }
        if (isCycle == false)
        {
            cout << "No Cycle Found :( " << endl;
            return;
        }

        slow = head;
        if (slow == fast) // Corner Case
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            while (slow != fast)
            {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = NULL;
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

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(0);
    ll.push_front(1);
    ll.tail->next = ll.head;
    ll.remove_Cycle();
    ll.remove_Cycle();

    return 0;
}
