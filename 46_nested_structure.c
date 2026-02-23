#include <stdio.h>
#include <string.h>
struct Customer{
    char name[30];
};
struct Item{
    char itemName[30];
    int qty;
};
struct Order{
    struct Customer c;
    struct Item i;
};
int main(){
    struct Order o;
    strcpy(o.c.name,"Ravi");
    strcpy(o.i.itemName,"Book");
    o.i.qty=2;
    printf("%s %s %d\n",o.c.name,o.i.itemName,o.i.qty);
    return 0;
}
