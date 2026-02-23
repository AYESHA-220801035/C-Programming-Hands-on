#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int fact=1;
    if(a<0){
        printf("factorial is not for negative numbers");
    }
    else{
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("fact is %d",fact);
    }
   return 0;
}
