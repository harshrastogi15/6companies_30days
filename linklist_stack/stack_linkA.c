#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *push(struct node *a, int value)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("stack is full\n");
        return a;
    }
    ptr->data = value;
    ptr->next = a;
    return ptr;
}

struct node *pop(struct node *a)
{
    struct node *temp;
    temp = a;
    a = a->next;
    free(temp);
    return a;
}

void print_linklist(struct node *start)
{
    if (start == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ", start->data);
    print_linklist(start->next);
}

void del_link(struct node *start)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        temp = temp->next;
        free(start);
        start = temp;
    }
}

// int main()
// {
//     struct node *head = NULL;
//     head = push(head, 90);
//     head = push(head, 80);
//     head = push(head, 70);
//     head = push(head, 60);
//     head = push(head, 50);
//     head = push(head, 40);
//     head = push(head, 30);
//     head = push(head, 20);
//     head = push(head, 10);
//     print_linklist(head);
//     head = pop(head);
//     head = pop(head);
//     head = pop(head);
//     head = push(head, 100);
//     print_linklist(head);
//     del_link(head);
//     return 0;
// }
