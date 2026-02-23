#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int j=0;j<n;j++){
        sum=sum+(*(p+j));
    }
    float avg=(float)sum/n;
    printf("%.2f",avg);
    return 0;
}
