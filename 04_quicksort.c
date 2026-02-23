#include <stdio.h>

void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}

int part(int arr[],int low,int high){
    int pivot=arr[high],i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quick(int arr[],int low,int high){
    if(low<high){
        int p=part(arr,low,high);
        quick(arr,low,p-1);
        quick(arr,p+1,high);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}