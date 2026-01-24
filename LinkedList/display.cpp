#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = new struct node();
    second = new struct node();
    third = new struct node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    display(head);

    return 0;
}





