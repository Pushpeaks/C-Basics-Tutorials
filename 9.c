//WAP to display result of a student based upon the grade he or she got
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){ 
    char grade;
    printf("Enter your grade : \n");
    scanf("%c",&grade);
    switch(grade){
        case 'a':
        printf("Excellent!!\n");
        break;
        case 'b':
        printf("Very Good!!\n");
        break;
        case 'c':
        printf("Good!!\n");
        break;
        case 'd':
        printf("Average!!\n");
        break;
        case 'e':
        printf("Fail!!\n");
        break;
        default:
        exit(0);
    }
}