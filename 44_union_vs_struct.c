#include <stdio.h>
#include <string.h>
union Data{
    int i;
    float f;
    char str[20];
};
struct Datas{
    int i;
    float f;
    char str[20];
};
int main(){
    union Data u;
    struct Datas s;
    printf("%lu %lu\n",sizeof(u),sizeof(s));
    strcpy(u.str,"hello");
    printf("%s\n",u.str);
    return 0;
}
