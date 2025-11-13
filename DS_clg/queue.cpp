#include <iostream>
using namespace std;

#define SIZE 5 

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

    bool isFull() {
        if (rear == SIZE-1)
        return rear == SIZE - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full (Overflow)\n";
            return;
        }
        if (front == -1)  
            front = 0;
        rear++;
        arr[rear] = value;
        cout << value << " enqueued\n";
    }

    // Remove element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty (Underflow)\n";
            return;
        }
        cout << arr[front] << " dequeued\n";
        front++;
    }

    // Get front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
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

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // This should show overflow
    q.display();

    return 0;
}
