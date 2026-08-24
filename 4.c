//wap to calculate the factorial of given number
#include<stdio.h>
#include<conio.h>

int main(){
    int i,num,fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact*=i;
    }
    printf("Factorial : %d",fact);
   return 0;
}
