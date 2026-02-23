#include <stdio.h>
int main() {
    int yr;
    scanf("%d",&yr);
    ((yr%400==0) ||(yr%4==0 && yr%100!=0))?printf("leapyr"):printf("not leap yr");
    return 0;
}
