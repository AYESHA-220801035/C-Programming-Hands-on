#include <stdio.h>
enum Status {PENDING,SHIPPED,DELIVERED};
struct Order {
    int orderID;
    enum Status status;
};
void displayStatus(enum Status s) {
    if (s == PENDING)
        printf("PENDING\n");
    else if (s == SHIPPED)
        printf("SHIPPED\n");
    else if (s == DELIVERED)
        printf("DELIVERED\n");
}
void updateStatus(struct Order *o, enum Status newStatus) {
    o->status = newStatus;
}
int main() {
    struct Order o1 = {1001, PENDING};
    printf("Initial Status: ");
    displayStatus(o1.status);
    updateStatus(&o1, SHIPPED);
    printf("Updated Status: ");
    displayStatus(o1.status);
    updateStatus(&o1, DELIVERED);
    printf("Final Status: ");
    displayStatus(o1.status);
    return 0;
}
