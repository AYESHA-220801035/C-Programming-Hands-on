#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }

int main(){
    int a,b,choice;
    scanf("%d %d %d",&a,&b,&choice);

    int (*op)(int,int);

    if(choice==1) op=add;
    else if(choice==2) op=sub;
    else op=mul;

    printf("Result: %d\n",op(a,b));
}