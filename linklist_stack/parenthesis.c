#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack_link.c"

void check(char equ[]){
    // puts(equ);
    int length;
    length=strlen(equ);
    // printf("%d\n",length);
    struct node *head=NULL;
    for (int i = 0; i < length ; i++){
        // printf("%c\n",equ[i]);
        if(equ[i]=='('){
            head=push(head,'(');
        }
        if(equ[i]==')'){
            if(head==NULL){
                printf("parenthesis is wrong\n");
                break;
            }
            head=pop(head);
        }
            
    }
    if(head!=NULL){
        printf("parenthesis is wrong\n");
    }
    else
        printf("parenthesis is right\n");

    print_linklist(head);
    del_link(head);
    
}

int main(){
    char equ[20];
    printf("write the equation.\n");
    gets(equ);
    check(equ);
    puts(equ);
    return 0;
}