#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp=n,sum=0,digits=0;
    while(temp){digits++; temp/=10;}
    temp=n;
    while(temp){
        sum+=pow(temp%10,digits);
        temp/=10;
    }
    return sum==n;
}

int isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++)
        if(n%i==0) sum+=i;
    return sum==n;
}

int main(){
    int n;
    scanf("%d",&n);

    printf(isArmstrong(n)?"Armstrong\n":"Not Armstrong\n");
    printf(isPerfect(n)?"Perfect\n":"Not Perfect\n");
}