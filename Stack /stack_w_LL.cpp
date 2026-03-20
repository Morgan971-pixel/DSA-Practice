#include <iostream>
#include <cstdlib>

// Stack implementation using linked list
struct Node
{
    int data;
    Node *next;
} *top = nullptr; // Global pointer to the top of the stack

void push(int x)
{
    Node *t = new Node;
    if (t == nullptr)
    {
        std::cout << "Stack is full\n";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t;
    int x = -1;
    if (top == nullptr)
    {
        std::cout << "Stack is Empty\n";
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Display()
{
    Node *p = top;
    while (p != nullptr)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << "\n";
}

int main()
{
    push(10);
    push(20);
    push(30);
    Display();
    std::cout << pop() << '\n';
    return 0;
}
