#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;int len=0;
    while(str[i]!='\0'){
        if(str[i]!='\n') {len++;}
        i++;
    }
    printf("%d",len);
    return 0;
}
