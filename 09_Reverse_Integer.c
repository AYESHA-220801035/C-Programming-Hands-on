#include<stdio.h>
#include<limits.h>
int main(){
    int n,rev=0,dig=0;
    scanf("%d",&n);
    while(n!=0){
        dig=n%10;
        if(rev>INT_MAX/10||rev<INT_MIN/10){
            printf("overflow occurs");
            return 0;
        }
        rev=rev*10+dig;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
