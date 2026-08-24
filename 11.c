//WAP to print multiplication table of a given number using functions
#include<stdio.h>
#include<conio.h>

void table(int n);

void main(){
    int num;
    printf("Enter the number whose multiplication table you want to enter :");
    scanf("%d",&num);
    printf("==========================================================\n");
    table(num);
}

void table(int n){
    int i;
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}