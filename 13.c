//WAP to check whether the given number is +ve -ve or 0
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    if(num>0)
    printf("Number is +ve");
    else if(num<0)
    printf("Number is -ve");
    else
    printf("Number is 0, e.i. Neither +ve nor -ve");
    return 0;
}