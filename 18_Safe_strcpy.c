#include <stdio.h>
void safcpy(char *dest, const char *src, int size){
    int i;
    for(i=0;i<size-1 && src[i];i++)
        dest[i]=src[i];
    dest[i]='\0';
}
int main(){
    char src[100], dest[20];
    fgets(src,100,stdin);
    safcpy(dest,src,20);
    printf("%s",dest);
}

