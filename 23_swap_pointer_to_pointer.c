#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a,char **b){
    char *t=*a;
    *a=*b;
    *b=t;
}

int main(){
    char *x=malloc(20);
    char *y=malloc(20);
    strcpy(x,"One");
    strcpy(y,"Two");
    swap(&x,&y);
    printf("%s %s\n",x,y);
    free(x);
    free(y);
    return 0;
}