#include <stdio.h>
struct Customer {
    int id;
    char name[50];
};
struct Item {
    int id;
    float price;
};
struct Order {
    struct Customer cus;
    struct Item it;
};
void printorder(struct Order o) {
    printf("Customer: %d %s\n", o.cus.id, o.cus.name);
    printf("Item: %d %.2f\n", o.it.id, o.it.price);
}
int main() {
    struct Order o = {{1,"Alice"},{101,500.0}};
    printorder(o);
    return 0;
}
