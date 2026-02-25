#include <stdio.h>
typedef struct {
    int id;
    char name[50];
} Emp;
int main() {
    Emp e = {1, "John"};
    printf("%d %s\n", e.id, e.name);
    return 0;
}
