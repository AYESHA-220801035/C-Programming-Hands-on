#include <stdio.h>
#define SIZE 5
int main(){
    int q[SIZE],front=-1,rear=-1,val;
    for(int i=0;i<SIZE;i++){
        scanf("%d",&val);
        if((rear+1)%SIZE==front) break;
        if(front==-1) front=0;
        rear=(rear+1)%SIZE;
        q[rear]=val;
    }
    for(int i=0;i<SIZE;i++){
        if(front==-1) break;
        printf("%d ",q[front]);
        if(front==rear){front=rear=-1;break;}
        front=(front+1)%SIZE;
    }
    return 0;
}
