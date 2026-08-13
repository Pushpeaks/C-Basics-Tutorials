/*
Write a program to store the details of 3 employees from user defined data. Use the structure declared
above
*/

#include <stdio.h>

struct emp{
    char name[20];
    int age;
    char gender;
}s1[3];

int main() {
    int i,age;char name[20],gender;
    for(i=0;i<3;i++){
        printf("=======================================\n");
        printf("Enter the details of the %d employee : \n",i+1);
        printf("=======================================\n");
        printf("Name : ");
        scanf("%s",&s1[i].name);
        printf("Age : ");
        scanf("%d",&s1[i].age);
        printf("Gender : ");
        scanf(" %c",&s1[i].gender);
        printf("=======================================\n");
    }
    for(i=0;i<3;i++){
        printf("=======================================\n");
        printf("The details of the %d employee : \n",i+1);
        printf("=======================================\n");
        printf("Name : %s\n",s1[i].name);
        // scanf("%s",s1[i].name);
        printf("Age : %d\n",s1[i].age);
        // scanf("%d",s1[i].age);
        printf("Gender : %c\n",s1[i].gender);
        // scanf("%c",s1[i].gender);
        printf("=======================================\n");
    }
    return 0;
}