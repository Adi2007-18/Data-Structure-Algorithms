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

    void print_LL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Insert node in middle of linked list
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Deleting only first Node
    void pop_front()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Empty Linked List" << endl;
        }
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // Deleting the Last Node
    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // Search in a Linked List
    int search(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)

            {
                cout << "Key found at= " << idx << endl;
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    // Reversing a Linked List
    void reverse()
    {
        Node *curr = head;
        Node *prev = NULL;
        tail = head;

        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    // Find and Remove the Nth Node from the Linked List

    // 1. Calculate the size of the Linked List

    int getSize()
    {
        int siz = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            siz++;
        }
        return siz;
    }

    // 2.Remove the Nth Node from the end

    void removeNode(int n)
    {
        int size = getSize();
        Node *prev = head;
        for (int i = 1; i < (size - n); i++) // Always start "i" from 1 because from end Node counting starts from "1" not "0"
        {
            prev = prev->next;
        }
        cout << "Going to delete= " << prev->next->data << endl;
        prev->next = prev->next->next;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.insert(100, 2);
    ll.pop_front();
    ll.pop_back();
    ll.search(5);
    ll.print_LL();
    ll.reverse();
    ll.print_LL();
    ll.removeNode(2);
    ll.print_LL();
    return 0;
}