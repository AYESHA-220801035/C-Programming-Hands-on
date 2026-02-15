#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int *ptr=arr;
    float sum=0;

    for(int i=0;i<n;i++)
        sum+=*(ptr+i);

    printf("Average: %.2f\n",sum/n);
}