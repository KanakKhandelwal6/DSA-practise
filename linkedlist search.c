#include<stdio.h>
#include<stdlib.h>
typedef struct  node{
    int data;
    struct node* next;
}node;

node* createnode(int data_){
    node* newnode = (node*)malloc(sizeof(node));
    if(!newnode){
        printf("Memory not found");
        exit(0);
    }
    else{
        newnode->data = data_;
        newnode->next = NULL;
        return newnode;
    }
}

void insertNode(node** head,int data_){
    node* newnode = createnode(data_);
    newnode->next = *head;
    *head = newnode;
}

int searchdata(node** head,int val){
    node* temp = *head;
    int c = 0;
    while(temp!=NULL){
        c=c+1;
        if(temp->data==val){
            printf("found here :- %d",c);
            exit(0);
        }
        else{
            temp = temp->next;
        }
    }

    printf("value not present here");
}

int main(){
    node* head = NULL;
    insertNode(&head,10);
    insertNode(&head,20);
    insertNode(&head,40);
    searchdata(&head,20);

}
