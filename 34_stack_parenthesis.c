#include <stdio.h>
#include <string.h>
int main(){
    char exp[100];
    scanf("%s",exp);
    char stack[100];
    int top=-1,flag=1;
    for(int i=0;i<strlen(exp);i++){
        char ch=exp[i];
        if(ch=='('||ch=='{'||ch=='[') stack[++top]=ch;
        else{
            if(top==-1){flag=0;break;}
            char t=stack[top--];
            if((ch==')'&&t!='(')||(ch=='}'&&t!='{')||(ch==']'&&t!='[')){flag=0;break;}
        }
    }
    if(top!=-1) flag=0;
    if(flag) printf("Balanced\n");
    else printf("Not Balanced\n");
    return 0;
}
