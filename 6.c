//WAP to reversify a number
#include<stdio.h>
#include<conio.h>

int main(){
    int num,n,rev=0,rem;
    printf("enter the number : ");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10; //last digit
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Rev : %d",rev);
}

