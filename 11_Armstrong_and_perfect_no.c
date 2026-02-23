#include<stdio.h>
#include<math.h>
int armstrong(int a){
    int temp=a;int sum=0;int cou=0;int lasdig=0;
    while(temp!=0){
        cou++;
        temp=temp/10;
    }
    temp=a;
    while(temp!=0){
        lasdig=temp%10;
        sum=sum+ pow(lasdig,cou);
        temp=temp/10;
    }
    return (sum==a);
}
int perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    return (sum==a);
}
int main(){
    int a;
    scanf("%d",&a);
    if(armstrong(a))
    printf("Armstrong no\n");
    else{
        printf("not armstrong no\n");
    }
    if(perfect(a)){
        printf("perfect no");
    }
    else{
        printf("not perfect no");
    }
    }
