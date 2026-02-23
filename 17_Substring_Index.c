#include <stdio.h>
#include <string.h>
int findSubs(char str[], char sub[]) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0')  
            return i;
    }
    return -1;
}
int main() {
    char str[100], sub[100];
    fgets(str, sizeof(str), stdin);
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';
    int index = findSubs(str, sub);
    if (index != -1)
        printf("Substring found at index %d\n",index);
    else
        printf("Substring not found\n");
    return 0;
}
