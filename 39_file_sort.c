#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b){return (*(int*)a-*(int*)b);}
int main(){
    FILE *f=fopen("input.txt","r");
    int arr[100],n=0;
    while(fscanf(f,"%d",&arr[n])==1) n++;
    fclose(f);
    qsort(arr,n,sizeof(int),cmp);
    FILE *o=fopen("output.txt","w");
    for(int i=0;i<n;i++) fprintf(o,"%d ",arr[i]);
    fclose(o);
    return 0;
}
