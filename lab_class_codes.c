// #include<stdio.h>
// #include<stdlib.h>

// //switch case using const characters
// // void main(){
// //     char s;
// //     printf("Enter A,B,C and D for the cases : ");
// //     scanf("%c",&s);
// //     switch(s){
// //         case 'a':
// //         printf("u are in case a");
// //         break;        
// //         case 'b':
// //         printf("u are in case a");
// //         break;
// //         case 'c':
// //         printf("u are in case a");
// //         break;
// //         case 'd':
// //         printf("u are in case a");
// //         break;
// //         default:
// //         printf("No such choices!");
// //     }
// // }

// //switch case using special characters
// // void main(){
// //     char s;
// //     int a,b;
// //     printf("Enter your choice : ");
// //     scanf("%c",&s);
// //     printf("Enter the int value of a : ");
// //     scanf(" %d",&a);
// //     // getche();
// //     printf("Enter the int value of b : ");
// //     scanf(" %d",&b);
// //     // getche();

// //     switch(s){
// //         case '+':
// //         printf("Sum : %d\n",a+b);
// //         break;

// //         case '-':
// //         printf("Difference : %d\n",a-b);
// //         break;

// //         case '*':
// //         printf("Product : %d\n",a*b);

// //         break;
// //         case '/':
// //         printf("Division : %d\n",a/b);
// //         break;

// //         case '%':
// //         printf("Remainder : %d",a%b);
// //         break;
// //     }
// // }

// // void main(){
// //     int a,b,op;
// //     printf("Enter 2 numbers : ");
// //     scanf("%d %d",&a,&b);
// //     printf("Enter the operation +,-,*,/ : ");
// //     scanf(" %c",&op);
// //     if(op=='+' || op=='-' || op=='*' ||op=='/'){
// //         if(op=='+'){
// //             printf("Sum : %d",a+b);
// //         }
// //         else if(op=='-'){
// //             printf("Difference : %d",a-b);
// //         }
// //         else if(op=='*'){
// //             printf("Product : %d",a*b);
// //         }
// //         else{
// //             printf("Division : %d",a/b);
// //         }
// //     }else{
// //         printf("No such operations can be done");
// //     }
// // }

//11-08-2026

/*
print numbers from 1 to 100
*/
#include <stdio.h>

// int main() {
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d\n ",i);
//     }
//     return 0;
// }
// int main() {
//     int i;
//     for(i=10;i>=1;i--){
//         printf("%d\n ",i);
//     }
//     return 0;
// }

// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

void multiplication_table(int num){
    int i;
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}

int sum_of_num(int num){
    int i,sum=0;
    for(i=0;i<=num;i++){
        sum+=i;
    }
    return sum;
}
int sum_of_evennum(int num){
    int i,sum=0;
    for(i=0;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int factorial(int num){
    int fact=1,i;
    if(num==0 || num==1){
        return 0;
    }else{
        for(i=num;i>=1;i--){
            fact=fact*i;
        }
        return fact;
    }
}

int main(){
    // int num;
    // printf("Enter the number whose multiplication table you have to print: ");
    // scanf("%d",&num);
    // multiplication_table(num);
    // return 0;
    // int num,sum;
    // printf("Enter the value of num : ");
    // scanf("%d",&num);
    // sum=sum_of_evennum(num);
    // printf("The sum = %d",sum);
    int num;
    long fact;
    printf("Enter the number for factorial : ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("%ld",fact);
    return 0;
}