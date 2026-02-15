#include <stdio.h>
#include <math.h>

int main() {
    int n, flag=0;
    scanf("%d", &n);

    if(n<=1) flag=1;

    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }

    flag?printf("Not Prime\n"):printf("Prime\n");
    return 0;
}