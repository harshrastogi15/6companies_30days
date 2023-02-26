#include <stdio.h>
#include <stdlib.h>
struct node* new_in_linked(struct node*, int);

struct node
{
    int data;
    struct node *link;
};

void print_linklist(struct node* start){
    if (start==NULL)
        return;
    printf("%d ",start->data);
    print_linklist(start->link);
    // printf("%d ",start->data);

}

void del_link(struct node* start){
    struct node* temp=start;
    while (temp!=NULL)
    {
        temp=temp->link;
        free(start);
        start=temp;
    }
    
}

int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr;
    ptr=head;
    ptr=new_in_linked(ptr,35);
    ptr=new_in_linked(ptr,25);
    ptr=new_in_linked(ptr,15);
    ptr=new_in_linked(ptr,05);
    
    print_linklist(head);
    del_link(head);
    return 0;
}

struct node* new_in_linked(struct node* refer,int num){
    struct node* comp;
    comp = (struct node*)malloc(sizeof(struct node));
    comp->data=num;
    comp->link=NULL;
    refer->link=comp;
    return comp;
} 



