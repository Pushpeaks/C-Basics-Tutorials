#include<stdio.h>
#include<conio.h>

// swapping 2 numbers without using 3rd variables
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers : %d %d",a,b);
}