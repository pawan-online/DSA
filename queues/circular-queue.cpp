// own circular Queues implementation in c++ using array
#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return (rear == size - 1 && front == 0) || (front != 0 && rear == front - 1);
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (front == -1)
                front = 0;
            if (rear < size - 1)
                rear++;
            else
                rear = 0;

            arr[rear] = x;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int val = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front < size - 1)
                front++;
            else
                front = 0;
        }
        return val;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void traverse()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";

        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Initial queue:\n";
    q.traverse();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    cout << "After two dequeues:\n";
    q.traverse();

    q.enqueue(60);
    q.enqueue(70);

    cout << "After enqueue 60 and 70 (circular wrap):\n";
    q.traverse();

    return 0;
}
