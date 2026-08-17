#include<stdio.h>
#include<conio.h>
//swapping two numbers using third variable
// int main(){
//     int a,b,temp;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     temp=b;
//     b=a;
//     a=temp;
//     printf("Values after swapping a: %d and b: %d",a,b);
//     return 0;    
// }
// int main(){
//     int a,b;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);  
//     a=a+b;
//     b=a-b;
//          a=a-b;
//     printf("Values after swapping a: %d and b: %d",a,b);
//     return 0;    
// }





// //add two numbers without using + operator
int main(){
    int a,b,i,temp;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    while(b>0){//positive -> add
        a++;
        b--;
    }
    while(b<0){//negative -> sub
        a--;
        b++;
    }
    printf("Sum : %d",a);
    return 0;
}