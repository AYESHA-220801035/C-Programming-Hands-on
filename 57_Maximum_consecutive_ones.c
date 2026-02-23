#include<stdio.h>
int conse(int arr[],int n){
    int curr=0;int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            curr++;
            if(curr>max){
                max=curr;
            }
        }
        else{curr=0;}
    }
    return max;
{

}}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int b=conse(arr,n);
    printf("%d",b);
}