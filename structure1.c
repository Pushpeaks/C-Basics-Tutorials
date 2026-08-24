//STRUCTURE DEMO
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
        int age;
        char name[10];
        char add[50];
    };

void main(){
    struct student s1;
    s1.age=20;
    strcpy(s1.name,"pushpesh");
    strcpy(s1.add,"bhopal");

    printf("student age= %d , student name =%s , student add= %s",s1.name,s1.name,s1.add);
}