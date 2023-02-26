#include <stdio.h>
#include <stdlib.h>

struct StackNode
{
    int data;
    struct StackNode *link;
};

struct StackNode *Push_stack(struct StackNode *top)
{
    struct StackNode *temp = (struct StackNode *)malloc(sizeof(struct StackNode));
    if (temp == NULL)
    {
        printf("Stack is Full\n");
        return top;
    }
    int value;
    printf("write the value: ");
    scanf("%d", &value);
    temp->data = value;
    temp->link = top;
    top = temp;
    return top;
}

struct StackNode *Pop_stack(struct StackNode *top)
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return top;
    }
    struct StackNode *temp = top;
    top = top->link;
    free(temp);
    return top;
}

void Display_stack(struct StackNode *top)
{
    if (top == NULL)
    {
        return;
    }
    else
    {
        Display_stack(top->link);
        printf("%d ", top->data);
    }
}

struct StackNode *Delete(struct StackNode *top)
{
    struct StackNode *temp;
    while (top != NULL)
    {
        temp = top;
        top = top->link;
        free(temp);
    }
    return top;
}

int main()
{
    struct StackNode *top = NULL;

    printf("To perform operation on stack choose key.\n");
    printf("1\tTo push in stack\n");
    printf("2\tTo pop from stack\n");
    printf("3\tTo display stack\n");
    printf("4\tTo exit\n");
    int key;
    printf("choose your key: ");
    scanf("%d", &key);
    while (key != 4)
    {
        switch (key)
        {
        case 1:
            top = Push_stack(top);
            break;
        case 2:
            top = Pop_stack(top);
            break;
        case 3:
            if (top == NULL)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Stack : ");
                Display_stack(top);
                printf("\n");
            }
            break;
        default:
            printf("you choose wrong key.\n");
            break;
        }
        printf("choose your key: ");
        scanf("%d", &key);
    }
    top = Delete(top);
    return 0;
}