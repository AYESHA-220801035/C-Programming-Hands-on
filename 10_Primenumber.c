#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int prime=1;
    if(a<=1){
        prime=0;
    }
    else{
        for(int i=2;i<sqrt(a);i++){
            if(a%i==0){
                prime=0;break;
            }
        }
    }
    if(prime){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
 
