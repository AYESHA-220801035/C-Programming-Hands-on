#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int ch;
    scanf("%c",&ch);
    int i=0;int j=0;
    while(str[i]!='\0'){
        if(str[i]!=ch){
            str[j]=str[i];j++;
        }
        i++;
    }
    str[j]='\0';
    printf("Modified string is %s",str);
    return 0;
}
