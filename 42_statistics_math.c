#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double arr[n],sum=0;
    for(int i=0;i<n;i++){scanf("%lf",&arr[i]);sum+=arr[i];}
    double mean=sum/n,var=0;
    for(int i=0;i<n;i++) var+=(arr[i]-mean)*(arr[i]-mean);
    var/=n;
    printf("Mean=%.2f Var=%.2f SD=%.2f\n",mean,var,sqrt(var));
    return 0;
}
