#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song{
    char name[50];
    struct Song* next;
};

int main(){
    struct Song *head=NULL,*tail=NULL,*newnode;
    for(int i=0;i<5;i++){
        newnode=malloc(sizeof(struct Song));
        scanf("%s",newnode->name);
        if(!head){head=tail=newnode;newnode->next=head;}
        else{tail->next=newnode;newnode->next=head;tail=newnode;}
    }
    struct Song* temp=head;
    int k=7;
    while(k--){
        printf("%s ",temp->name);
        temp=temp->next;
    }
    return 0;
}