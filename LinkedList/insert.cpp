#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *first = NULL; // Global pointer to the first node of the linked list

void Insert(int pos, int x)
{
    Node *t, *p;
    if (pos==0) // Insert at the beginning
        {
            t = new Node;
            t->data = x;
            t->next = first;
            first = t;

        }
        else if(pos>0) // Insert at given position
        {
            p = first;
            for (int i = 0; i < pos - 1 && p; i++) // Traverse to the node before the position
                p = p->next;
            if (p) // If p is not NULL, insert the new node
            {
                t = new Node;
                t->data = x;
                t->next = p->next;
                p->next = t;
            }
        }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    Insert(0, 10); // Insert 10 at position 0
    Insert(1, 20); // Insert 20 at position 1
    Insert(1, 15); // Insert 15 at position 1

    display(first); // Display the linked list

    return 0;
}
