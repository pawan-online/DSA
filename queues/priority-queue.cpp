#include <iostream>
using namespace std;

class PriorityQueue
{
    int *arr; // queue elements
    int *prr; // priorities
    int front, rear;
    int capacity;

public:
    PriorityQueue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        prr = new int[capacity];
        front = rear = -1;
    }

    ~PriorityQueue()
    {
        delete[] arr;
        delete[] prr;
    }

    bool isfull()
    {
        if (rear == capacity - 1)
        {
            cout << "Queue is full" << endl;
            return true;
        }
        return false;
    }

    bool isempty()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return true;
        }
        return false;
    }

    void enque(int x, int y)
    {
        if (isfull())
            return;

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = x;
        prr[rear] = y;

        int temp;
        for (int i = front; i <= rear; i++)
        {
            for (int j = i + 1; j <= rear; j++)
            {
                if (prr[i] > prr[j])
                {
                    // swap array elements
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

                    // swap priority
                    temp = prr[i];
                    prr[i] = prr[j];
                    prr[j] = temp;
                }
            }
        }
    }

    void deque()
    {
        if (isempty())
            return;

        cout << "Deleted: " << arr[front] << " (Priority " << prr[front] << ")" << endl;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front++;
        cout << endl;
    }

    void display()
    {
        if (isempty())
            return;

        cout << "Element\tPriority" << endl;
        for (int i = front; i <= rear; i++)
            cout << arr[i] << "\t" << prr[i] << endl;
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq(5);

    pq.enque(10, 3);
    pq.enque(20, 1);
    pq.enque(30, 2);

    pq.display();
    pq.deque();
    pq.display();
    pq.enque(5, 1);
    pq.display();

    return 0;
}
