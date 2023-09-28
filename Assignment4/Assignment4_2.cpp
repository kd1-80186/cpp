/*Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/

#include <iostream>

using namespace std;

class Stack
{
private:
    int size;
    int top;
    int data;
    int *arr;

public:
    Stack()
    {
        this->size = 5;
        this->top = -1;
        this->data = 0;
    }

    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        this->data = 0;
        arr = new int[5];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push()
    {
        if (isFull())
        {
            cout << "Stack is full!!" << endl;
        }
        else
        {
            cout << "Enter element to push : ";
            cin >> data;
            ++top;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (isEmpty())
            cout << "Stack is empty!!" << endl;
        else
            cout << "Popped element is : " << arr[top] << endl;
        arr[top] = 0;
        top -= 1;
    }

    void peek()
    {
        cout << "Top most element is : " << arr[top] << endl;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == this->size - 1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack s(5);
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}