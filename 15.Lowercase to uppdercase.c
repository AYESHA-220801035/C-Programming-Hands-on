#include <stdio.h>

int main(){
    char str[100];
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;

    printf("%s",str);
}