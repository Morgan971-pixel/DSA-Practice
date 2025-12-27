#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first = NULL;

void reverseData()
{
    int A[100]; // Assuming the maximum size of the linked list is 100
    int i = 0;

    Node *p = first;

    // Copy data into array
    while (p != NULL)
    {
        A[i++] = p->data;
        p = p->next;
    }

    // Copy data back in reverse order
    p = first;
    i--;
    while (p != NULL)
    {
        p->data = A[i--];
        p = p->next;
    }
}

// Helper function to insert at last
void insert(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (!first)
        first = t;
    else
    {
        Node *p = first;
        while (p->next)
            p = p->next;
        p->next = t;
    }
}

// Display list
void display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display(); // 10 20 30 40
    reverseData();
    display(); // 40 30 20 10

    return 0;
}
