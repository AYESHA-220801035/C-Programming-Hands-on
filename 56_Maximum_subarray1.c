#include<stdio.h>
double maxavg(int arr[],int n,int k){
    int i=0;int maxsum=0;int sum=0;
for(int i=0;i<k;i++){
    sum=sum+arr[i];
}
maxsum=sum;
for(int j=k;j<n;j++){
    sum=sum+arr[j]-arr[j-k];
    if(sum>maxsum){
        maxsum=sum;
    }
}
return (double)maxsum/k;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    double b=maxavg(arr,n,k);
    printf("%.2f",b);
}
