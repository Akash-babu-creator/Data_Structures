#include <stdio.h>
#include <iostream>
using namespace std;
#define size 10
class stack
{
private:
    int arr[size];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "stackoverflow" << endl;
        }
        else
        {
            arr[++top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to delete" << endl;
        }
        else
        {
            arr[top--];
            cout << "first element deleted"<<endl;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty"<<endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool is_empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(10);
    s.push(4);
    s.push(6);
    s.push(8);
    cout<<"top element ="<<s.peek()<<endl;
    for (int i = 0; i < 5; i++)
    {
        s.pop();
    }
    cout<<s.is_empty()<<endl;
    return 0;

}
