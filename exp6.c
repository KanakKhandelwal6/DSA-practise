#include<stdio.h>
#include<stdlib.h>

 void main(){ 

    struct node{
        int data;
        struct node*next;

    };
    struct node*head,*temp;
    
      {
    
        struct node*nextnode;
        int pos,i=1;
        temp=head;
        printf("enter position");
        scanf("%d",&pos);

        while(i<pos-1){
            temp=temp-> next;
            i++;
        }
        nextnode=temp->next;
temp->next= nextnode->next;
free(nextnode);

     }
}
 
