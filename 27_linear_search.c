#include <stdio.h>

int main(){
    int n,target,pos=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){pos=i;break;}
    }
    if(pos!=-1) printf("Found at %d\n",pos);
    else printf("Not Found\n");
    return 0;
}
