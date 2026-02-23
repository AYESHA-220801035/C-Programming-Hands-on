#include <stdio.h>
typedef struct{
    int id;
    float price;
}Product;
int main(){
    Product p={1,99.5};
    printf("%d %.2f\n",p.id,p.price);
    return 0;
}
