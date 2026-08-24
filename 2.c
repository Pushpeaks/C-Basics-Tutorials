//swapping two numbers using third variable
#include <stdio.h>
#include<conio.h>

int main() {
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped numbers : %d %d",a,b);
    return 0;
}