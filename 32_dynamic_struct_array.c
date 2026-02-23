#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Item{
    int id;
    char name[50];
};
int main(){
    int n;
    scanf("%d",&n);
    struct Item *list=malloc(n*sizeof(struct Item));
    for(int i=0;i<n;i++)
        scanf("%d%s",&list[i].id,list[i].name);
    int del;
    scanf("%d",&del);
    for(int i=0;i<n;i++){
        if(list[i].id==del){
            for(int j=i;j<n-1;j++)
                list[j]=list[j+1];
            n--;
            break;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d %s\n",list[i].id,list[i].name);
    free(list);
    return 0;
}
