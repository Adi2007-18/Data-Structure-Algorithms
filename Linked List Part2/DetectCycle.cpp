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

    // Detecting a cycle in Linked List

    bool detect_Cycle()
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "Cycle present :)";
                return true;
            }
        }
        cout << "No Cycle Found :( ";
        return false;
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
    ll.detect_Cycle();
    return 0;
}
