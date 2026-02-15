#include <stdio.h>
#include <string.h>

int main(){
    char str[100], sub[100];
    fgets(str,100,stdin);
    fgets(sub,100,stdin);

    for(int i=0;str[i];i++){
        int j;
        for(j=0;sub[j] && str[i+j]==sub[j];j++);
        if(sub[j]=='\0'){
            printf("Found at %d\n",i);
            return 0;
        }
    }
    printf("Not Found\n");
}