#include <stdio.h>
int main() {
    int a;int b;
    scanf("%d %d",&a,&b);
    printf("sum is %d\n",a+b);
    printf("diff is %d\n",a-b);
    printf("product is %d\n",a*b);
    if(b!=0){
    printf("quotient is %d",a/b);
}else{
    printf("Cant divide by 0");
}
}

