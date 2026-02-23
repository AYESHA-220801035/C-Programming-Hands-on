#include<stdio.h>
int longone(int arr[], int n, int k) {
    int no = 0;
    int zer = 0;
    int maxsum = 0;
    int left = 0;   

    for(int i = 0; i < n; i++) {

        if(arr[i] == 1){
            no++;
        }
        else{
            zer++;
        }

        while(zer > k){
            if(arr[left] == 1){
                no--;
            }
            else{
                zer--;
            }
            left++;
        }

        int sum = no + zer;

        if(maxsum < sum){
            maxsum = sum;
        }
    }

    return maxsum;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int b=longone(arr,n,k);
    printf("%d",b);
}