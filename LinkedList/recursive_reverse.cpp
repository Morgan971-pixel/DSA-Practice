#include <iostream>
using namespace std;

// 2 pointers recursive reversal of linked list

struct Node {
    int data;
    Node *next;
};

Node *first = nullptr;

void display(Node *p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void reverse(Node *p, Node *q)
{
    if (p != nullptr)
    {
        reverse(p->next, p);
        p->next = q;
    }
    else
    {
        first = q; // Update the head of the reversed list
    }
}

int main()
{
    // Sample code to create a linked list for demonstration
    struct Node *t1 = (struct Node *)malloc(sizeof(struct Node));
    t1->data = 10;
    t1->next = NULL;
    first = t1;

    struct Node *t2 = (struct Node *)malloc(sizeof(struct Node));
    t2->data = 20;
    t2->next = NULL;
    t1->next = t2;

    struct Node *t3 = (struct Node *)malloc(sizeof(struct Node));
    t3->data = 30;
    t3->next = NULL;
    t2->next = t3;

    cout << "Original list: ";
    display(first);

    reverse(first, NULL);

    cout << "Reversed list: ";
    display(first);

    return 0;
}
