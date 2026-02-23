#include <stdio.h>
#include <stdlib.h>

struct Node{
    int seat;
    struct Node *prev,*next;
};

void display(struct Node* head){
    struct Node* temp=head;
    while(temp){printf("%d ",temp->seat);if(!temp->next)break;temp=temp->next;}
    while(temp){printf("%d ",temp->seat);temp=temp->prev;}
}

int main(){
    struct Node *head=NULL,*tail=NULL,*newnode;
    for(int i=0;i<4;i++){
        newnode=malloc(sizeof(struct Node));
        scanf("%d",&newnode->seat);
        newnode->next=NULL;
        newnode->prev=tail;
        if(!head) head=newnode;
        if(tail) tail->next=newnode;
        tail=newnode;
    }
    display(head);
    return 0;
}