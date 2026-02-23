#include<stdio.h>
#include<ctype.h>
#include<string.h>
int palindrome(char str[]){
    int lef=0;int rig=strlen(str)-1;
    while(lef<rig){
        if(!isalnum(str[lef])){
            lef++;
        }
        else if(!isalnum(str[rig])){
            rig--;
        }
        else{
            if(tolower(str[lef])!=tolower(str[rig])){
                return 0;
            }
            lef++;
            rig--;
        }
    }
    return 1;
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    if(palindrome(str)){
        printf("palindrome");   
        }
        else{
            printf("not palindrome");
        }
        return 0;
}
