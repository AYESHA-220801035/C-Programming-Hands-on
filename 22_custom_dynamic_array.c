#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int *data;
    int size;int capacity;
}vector;
void initi(vector *v,int cap){
    v->capacity=cap;
    v->size=0;
    v->data=malloc(v->capacity*(sizeof(int)));
}
void resize(vector *v){
    v->capacity=v->capacity*2;
    v->data=realloc(v->data,v->capacity*(sizeof(int)));
}
void push(vector *v,int val){
    if(v->size==v->capacity) resize(v);
    v->data[v->size++]=val;
}
void pop(vector *v){
    if(v->size>0)v->size--;
}
int main(){
    vector v;
    int cap;
    scanf("%d",&cap);
        initi(&v,cap);
    push(&v,10);
    push(&v,20);
    push(&v,30);
    pop(&v);
    for(int i=0;i<v.size;i++){
        printf("%d\n",v.data[i]);
    }
    free(v.data);
    return 0;
    }
    
