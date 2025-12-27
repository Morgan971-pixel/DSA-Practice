#include <iostream>
#include <cstdlib>

// Definition of the Node structure
struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL; // Pointer to the first node of the linked list
void deleteAtPosition(int position)
{
    if (!first || position < 1)
    {
        std::cout << "Invalid position or empty list." << std::endl;
        return;
    }

    Node *temp = first;

    if (position == 1)
    {
        first = first->next;
        free(temp);
        return;
    }

    for (int i = 1; temp && i < position - 1; i++)
        temp = temp->next;

    if (!temp || !temp->next)
    {
        std::cout << "Position exceeds list length." << std::endl;
        return;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}

void display()
{
    struct Node *p = first;
    while (p != NULL)
    {
        std::cout << p->data << " -> ";
        p = p->next;
    }
    std::cout << "NULL" << std::endl;
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

    std::cout << "Original List: ";
    display();

    int position;
    std::cout << "Enter position to delete: ";
    std::cin >> position;

    deleteAtPosition(position);

    std::cout << "List after deletion: ";
    display();

    return 0;
}

// time complexity: O(n)
// space complexity: O(1)
