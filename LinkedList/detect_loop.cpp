#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int isLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;
    do
    {
        p = p->next; // Move p by one
        q = q->next; // Move q by two
        if (q != NULL)
            q = q->next;
    } while (p && q && p != q);
    return (p == q) ? 1 : 0;
}

int main()
{
    // Sample code to create a linked list with a loop for demonstration
    struct Node *t1 = new Node();
    t1->data = 10;
    t1->next = nullptr;

    struct Node *t2 = new Node();
    t2->data = 20;
    t2->next = nullptr;
    t1->next = t2;

    struct Node *t3 = new Node();
    t3->data = 30;
    t3->next = nullptr;
    t2->next = t3;

    // Creating a loop for testing
    t3->next = t1; // Creates a loop here

    if (isLoop(t1))
        cout << "Loop detected in the linked list." << endl;
    else
        cout << "No loop detected in the linked list." << endl;

    return 0;
}

// related to circular linked list detection where the difference is that in a circular linked list, the last node points back to the first node, forming a closed loop.
// In contrast, a linked list with a loop can have the loop starting at any node within the list, not necessarily the last node pointing to the first.
