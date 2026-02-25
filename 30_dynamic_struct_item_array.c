#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Item {
    int id;
    char name[50];
};
int main() {
    int n;
    printf("Enter no of items: ");
    scanf("%d", &n);
    struct Item *items = (struct Item *)malloc(n * sizeof(struct Item));
    if (items == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d %s", &items[i].id, items[i].name);
    }
    int choice;
    do {
        printf("\n1. Add Item\n2. Delete Item\n3. Display Items\n4. Exit\n");
        scanf("%d", &choice);
        if(choice == 1) {
            struct Item *temp = realloc(items, (n + 1) * sizeof(struct Item));
            if(temp == NULL) {
                printf("Reallocation failed!\n");
                continue;
            }
            items = temp;
            printf("Enter new id and name: ");
            scanf("%d %s", &items[n].id, items[n].name);
            n++;
            printf("New Item added\n");
        }
        else if(choice == 2) {
            int del_id, found = 0;
            printf("Enter ID to delete: ");
            scanf("%d", &del_id);
            for(int i = 0; i < n; i++) {
                if(items[i].id == del_id) {
                    found = 1;
                    for(int j = i; j < n - 1; j++) {
                        items[j] = items[j + 1];   
                    }
                    n--;
                    struct Item *temp = realloc(items, n * sizeof(struct Item));
                    if(temp != NULL || n == 0)
                        items = temp;
                    printf("Item deleted\n");
                    break;
                }
            }
            if(!found)
                printf("Item not found\n");
        }
        else if(choice == 3) {
            for(int i = 0; i < n; i++)
                printf("%d %s\n", items[i].id, items[i].name);
        }
    } while(choice != 4);
    free(items);
    return 0;
}
