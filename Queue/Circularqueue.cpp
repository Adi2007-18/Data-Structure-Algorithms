#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int capacity;
    int currsize = 0;
    int f = 0;
    int r = -1;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
    }

    void push(int val)
    {
        if (currsize == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        currsize++;
    }
    void pop()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        f = (f + 1) % capacity;
        currsize--;
    }

    void front()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "The first element is= " << arr[f] << endl;
    }
    bool isempty()
    {
        return currsize == 0;
    }
};

int main()
{
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.front();
    q.pop();
    q.front();
    q.push(5);
    q.front();
    return 0;
}