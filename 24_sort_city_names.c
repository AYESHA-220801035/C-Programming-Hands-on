#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5     
#define SIZE 100   
void sortCities(char *cities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                char *temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}
void freecit(char *cities[], int n) {
    for (int i = 0; i < n; i++) {
        free(cities[i]);
    }
}
int main() {
    char *cities[MAX];
    printf("Enter %d city names:\n", MAX);
    for (int i = 0; i < MAX; i++) {
        cities[i] = (char *)malloc(SIZE * sizeof(char));
        if (cities[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        fgets(cities[i], SIZE, stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }
    sortCities(cities, MAX);
    printf("Cities in order:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%s\n", cities[i]);
    }
    freecit(cities, MAX);
    return 0;
}
