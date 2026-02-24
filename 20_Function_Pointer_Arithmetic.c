#include <stdio.h>
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int div(int a,int b){ return a/b; }
int main(){
    int a,b,choice;
    scanf("%d %d %d",&a,&b,&choice);
    int (*op)(int,int);
    if(choice==1) op=add;
    else if(choice==2) op=sub;
    else if (choice==3) op=mul;
    else op=div;
    printf("Result: %d\n",op(a,b));
}

