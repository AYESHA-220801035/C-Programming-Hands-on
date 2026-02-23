#include <stdio.h>

double add(double a,double b){return a+b;}
double sub(double a,double b){return a-b;}
double mul(double a,double b){return a*b;}
double divi(double a,double b){return b!=0?a/b:0;}

int main(){
    double x,y;
    int choice;
    double (*ops[4])(double,double)={add,sub,mul,divi};
    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d%lf%lf",&choice,&x,&y);
    if(choice>=1 && choice<=4)
        printf("Result=%.2lf\n",ops[choice-1](x,y));
    return 0;
}
