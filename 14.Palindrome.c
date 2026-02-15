#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,100,stdin);

    int l=0,r=strlen(str)-2;

    while(l<r){
        if(!isalnum(str[l])) l++;
        else if(!isalnum(str[r])) r--;
        else if(tolower(str[l])!=tolower(str[r])){
            printf("Not Palindrome\n");
            return 0;
        } else {
            l++; r--;
        }
    }
    printf("Palindrome\n");
}