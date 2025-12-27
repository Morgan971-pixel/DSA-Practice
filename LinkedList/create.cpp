#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL; // Pointer to the first node of the linked list

void insertAtLast(int x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    // If the list is empty, make the new node the first node
    if (first == NULL)
    {
        first = t;

        // Otherwise, traverse to the end and insert the new node
    }
    else
    {
        struct Node *p = first;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = t;
    }
}

void display()
{
    struct Node *p = first;
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main()
{
    insertAtLast(17);
    insertAtLast(19);
    insertAtLast(45);

    display();
    return 0;
}
