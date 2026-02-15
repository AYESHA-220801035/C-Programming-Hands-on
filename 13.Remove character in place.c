#include <stdio.h>

int main(){
    char str[100], ch;
    fgets(str,100,stdin);
    scanf(" %c",&ch);

    int i,j=0;
    for(i=0;str[i]!='\0';i++)
        if(str[i]!=ch)
            str[j++]=str[i];

    str[j]='\0';
    printf("%s",str);
}