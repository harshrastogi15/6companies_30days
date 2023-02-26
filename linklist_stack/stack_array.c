#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int is_full(struct stack*ele){
    if((ele->top)==(ele->size)-1){
        printf("Stack is full\n");
        return 1;
    }
    else
        return 0;    
}

void push(struct stack* ele, int num ){
    int check=is_full(ele);
    if(check==1)
        return;
    
    (ele->top)++;
    ele->arr[ele->top]=num;
}

int is_Empty(struct stack*ele){
    if((ele->top)==-1){
        printf("Stack is Empty\n");
        return 1;
    }
    else
        return 0;    
}

void pop(struct stack* ele){
    int check=is_Empty(ele);
    if(check==1)
        return;
    (ele->top)--;
}

int main()
{
    struct stack s;
    s.size=10;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
    pop(&s);
    pop(&s);
    // push(&s,10);
    // push(&s,20);
    // push(&s,30);
    // push(&s,40);
    // push(&s,50);
    // push(&s,60);
    // push(&s,70);
    // push(&s,80);
    // push(&s,90);
    // push(&s,100);
    // pop(&s);
    // pop(&s);
    push(&s,20);
    push(&s,20);
    push(&s,20);
    push(&s,20);
    for (int i = 0; i <= s.top; i++)
    {   
        printf("%d\n",s.arr[i]);
    }
    
    free(s.arr);
    return 0;
}
