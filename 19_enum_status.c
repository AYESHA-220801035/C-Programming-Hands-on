#include <stdio.h>

enum Status{PENDING,SHIPPED,DELIVERED};

int main(){
    enum Status s=PENDING;
    s=SHIPPED;
    printf("%d\n",s);
    s=DELIVERED;
    printf("%d\n",s);
    return 0;
}