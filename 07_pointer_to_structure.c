#include <stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct Student s={1,"Arun",75};
    struct Student *ptr=&s;
    ptr->marks=85;
    printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
    return 0;
}