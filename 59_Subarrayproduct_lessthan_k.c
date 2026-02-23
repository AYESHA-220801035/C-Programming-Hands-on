#include <stdio.h>
int subarylessthank(int arr[], int n, int k) {
    if (k <= 1)
        return 0;
    int left = 0;
    int count = 0;
   int product = 1;   
    for (int right = 0; right < n; right++) {
        product *= arr[right];
        while (product >= k) {
            product /= arr[left];
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b = subarylessthank(arr,n,k);
    printf("%d",b);
}