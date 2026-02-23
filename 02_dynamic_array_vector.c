#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *arr;
    int size;
    int cap;
}Vector;

void init(Vector *v){
    v->size=0;
    v->cap=2;
    v->arr=malloc(v->cap*sizeof(int));
}

void push(Vector *v,int val){
    if(v->size==v->cap){
        v->cap*=2;
        v->arr=realloc(v->arr,v->cap*sizeof(int));
    }
    v->arr[v->size++]=val;
}

void pop(Vector *v){
    if(v->size>0) v->size--;
}

void resize(Vector *v,int newcap){
    v->cap=newcap;
    v->arr=realloc(v->arr,v->cap*sizeof(int));
    if(v->size>newcap) v->size=newcap;
}

int main(){
    Vector v;
    init(&v);
    push(&v,10);
    push(&v,20);
    push(&v,30);
    pop(&v);
    resize(&v,5);
    for(int i=0;i<v.size;i++) printf("%d ",v.arr[i]);
    free(v.arr);
    return 0;
}