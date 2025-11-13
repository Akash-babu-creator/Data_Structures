#include <iostream>
using namespace std;

#define SIZE 5  // maximum size of the queue

class Queue {
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    int isFull() 
    {
        int n=0;
        if(rear == SIZE - 1)
        {
            cout<<"queue is full"<<endl;
            n++;
            return n;
        }
    }

   
    int isEmpty() 
    {
        int n=0;
        if(front == -1 || front > rear)
        {
            cout<<"queue is empty"<<endl;
            n++;
            return n ;
        }
    }
    void enqueue(int value) {
        if (isFull()!=0)
        {
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = value;
        cout << value << " inserted value\n";
    }

    void dequeue() {
        if (isEmpty()!=0)
        {
            cout<<"the que is empty(underflow)"<<endl;
            return;
        }
        cout << arr[front] << " element from the from is deleted dequeued\n";
        front++;
    }
    int peek() {
        if (isEmpty()!=0) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
    void display() {
        if (isEmpty()!=0)
        {
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] <<endl;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    // cout << "Front element: " << q.peek() << endl;

    // q.dequeue();
    // q.display();

    // q.enqueue(40);
    // q.enqueue(50);
    // q.enqueue(60);  
    // q.display();

    return 0;
}
