#include <stdio.h>
int parse(int val){
    if(val<1||val>100) return -1;
    return 0;
}
int main(){
    int x;
    if(scanf("%d",&x)!=1){printf("Format Error\n");return 1;}
    if(parse(x)==-1){printf("Range Error\n");return 2;}
    printf("Valid\n");
    return 0;
}
