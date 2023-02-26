#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int key;
    struct node *left; 
    struct node *right; 
}node;

node* NewNode(int value){
    node *temp=(node*)malloc(sizeof(node));
    temp->key=value;
    temp->left=NULL; 
    temp->right=NULL;
    return temp; 
}

node* InsertionBT(node* subroot, int value){
    if(subroot==NULL)
        return NewNode(value);
    if(value<subroot->key){
        subroot->left=InsertionBT(subroot->left,value);
    }else if(value>subroot->key){
        subroot->right=InsertionBT(subroot->right,value);
    }
    return subroot;
}

node* DeleteBTNode(node* subroot, int key){
    if(subroot==NULL)
        return subroot;
    if(key<subroot->key){
        subroot->left=DeleteBTNode(subroot->left,key);
    }
    else if(key>subroot->key){
        subroot->right=DeleteBTNode(subroot->right,key);
    }else{
       if(subroot->left==NULL){
           node* temp = subroot->right;
           free(subroot);
           return temp;
       } else if(subroot->right==NULL){
           node* temp = subroot->left;
           free(subroot);
           return temp;
       } 
       node * temp=subroot->right;
       while(temp && temp->left != NULL){
           temp=temp->left;
       }
       subroot->key=temp->key;
       DeleteBTNode(subroot->right,temp->key);
    }
    return subroot;
}

node* SearchKey(node* subroot, int value){
    if(subroot==NULL || subroot->key==value)
        return subroot;
    if(value<subroot->key){
        return SearchKey(subroot->left,value);
    }
    else{
        return SearchKey(subroot->right,value);
    }
}

void inorder(node* root){
    if(root==NULL){
        printf("\n");
        return;
    }else{
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}

int main(){
    node* root=NULL;
    root=InsertionBT(root,1);
    root=InsertionBT(root,10);
    inorder(root);
    root=InsertionBT(root,2);
    inorder(root);
    root=InsertionBT(root,5);
    inorder(root);
    root=DeleteBTNode(root,10);
    inorder(root);
    printf("search:");
    node * temp=SearchKey(root, 5);
    if(temp==NULL){
    printf("Not Found");
    }else{
    printf("Found");
    }
    return 0;
}