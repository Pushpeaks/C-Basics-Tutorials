/*
1) WAP to find the largest of two numbers
*/

// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter two numbers : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d is larger than %d",a,b);
//     }
//     else if(a<b){
//         printf("%d is larger than %d",a,b);
//     }
//     else{
//         printf("Both are equal");
//     }

//     return 0;
// }

/*
2) WAP to find the smallest of 3 numbers
*/

// #include <stdio.h>

// int main(void) {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a <= b && a <= c) {
//         printf("%d is the smallest\n", a);
//     } else if (b <= a && b <= c) {
//         printf("%d is the smallest\n", b);
//     } else {
//         printf("%d is the smallest\n", c);
//     }

//     return 0;
// }

/*
3) Check whether the given year is a leap year or not
*/

// #include<stdio.h>

// int main(){
//     int year;
//     printf("Enter the year : ");
//     scanf("%d",&year);
//     if(year%400==0 || (year%4==0 && year%100!=0)){
//         printf("Given year is a leap year");
//     }else{
//         printf("Given year is not a leap year");
//     }
//     return 0;
// }

/*
4) WAP to check whether the given character is an alphabet, digit or a special character?
*/
// #include <stdio.h>

// int main(void) {
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//         printf("'%c' is an alphabet.\n", ch);
//     } else if (ch >= '0' && ch <= '9') {
//         printf("'%c' is a digit.\n", ch);
//     } else {
//         printf("'%c' is a special character.\n", ch);
//     }
//     return 0;
// }


/*
5) WAP to get the greatest of the three numbers
*/
// #include <stdio.h>

// int main(void) {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= b && a >= c) {
//         printf("%d is the greatest number.\n", a);
//     } else if (b >= a && b >= c) {
//         printf("%d is the greatest number.\n", b);
//     } else {
//         printf("%d is the greatest number.\n", c);
//     }

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

/*
6) Write a program to calculate the sum of n even and n odd numbers using functions separately
*/
// #include<stdio.h>

// int sum_even(int);
// int sum_odd(int);

// int main(){
//     int n,even,odd;
//     printf("Enter upto what terms you want to calculate the sum of even and odd numbers. : ");
//     scanf("%d",&n);
//     even=sum_even(n);
//     odd=sum_odd(n);
//     printf("Sum of %d odd numbers (ie. 1,3,5,7,9...) is %d\n",n,odd);
//     printf("Sum of %d even numbers (ie. 2,4,6,8,10...) is %d",n,even);
//     return 0;
// }

// int sum_even(int n){
//     return (n*n)+n;
// }

// int sum_odd(int n){
//     return n*n;
// }




/*
7) Write a program to check student's grade based on marks
*/
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter your total marks : ");
//     scanf("%d",&marks);  
//     if(marks>0){
//         if(marks<=100 && marks>80){
//             printf("\nFirst Division");
//         }else if(marks<=80 && marks>75){
//             printf("Second Division");
//         }else if(marks<=75 && marks>60){
//             printf("Third Division");
//         }else{
//             printf("Fail");
//         }
//     }else{                  
//         printf("Enter valid marks!!");
//     }
//     return 0;
// }

/*
8) Write a program using switch case to implement a basic calculator
*/
// #include <stdio.h>
// int main() {
//     float num1, num2, result;
//     char operation;
//     printf("Enter first number: ");
//     scanf("%f", &num1);
//     printf("Enter an operator (+, -, *, /): ");
//     scanf(" %c", &operation);
//     printf("Enter second number: ");
//     scanf("%f", &num2);
//     switch (operation) {
//         case '+':
//             result = num1 + num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '/':
//             switch (num2 == 0) {
//                 case 1:
//                     printf("Error: Division by zero is not allowed.\n");
//                     break;
//                 default:
//                     result = num1 / num2;
//                     printf("Result = %.2f\n", result);
//             }
//             break;
//         default:
//             printf("Invalid operator.\n");
//     }
//     return 0;
// }

/*
9) Write a program to implement a basic atm using switch case only
*/
// #include <stdio.h>
// int main() {
//     int choice, pin = 1234, enteredPin, newPin;
//     float balance = 0.0, amount;
//     printf("Welcome to ATM\n");
//     printf("Enter your PIN: ");
//     scanf("%d", &enteredPin);
//     switch (enteredPin == pin) {
//         case 1:
//             do {
//                 printf("\n----- ATM MENU -----\n");
//                 printf("1. Check Balance\n");
//                 printf("2. Deposit Money\n");
//                 printf("3. Withdraw Money\n");
//                 printf("4. Change PIN\n");
//                 printf("5. Exit\n");
//                 printf("Enter your choice: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1:
//                         printf("Current Balance: Rs. %.2f\n", balance);
//                         break;
//                     case 2:
//                         printf("Enter amount to deposit: ");
//                         scanf("%f", &amount);
//                         switch (amount > 0) {
//                             case 1:
//                                 balance += amount;
//                                 printf("Deposit successful.\n");
//                                 printf("New Balance: Rs. %.2f\n", balance);
//                                 break;
//                             default:
//                                 printf("Invalid amount.\n");
//                         }
//                         break;
//                     case 3:
//                         printf("Enter amount to withdraw: ");
//                         scanf("%f", &amount);
//                         switch (amount > 0) {
//                             case 1:
//                                 switch (amount <= balance) {
//                                     case 1:
//                                         balance -= amount;
//                                         printf("Please collect your cash.\n");
//                                         printf("Remaining Balance: Rs. %.2f\n", balance);
//                                         break;
//                                     default:
//                                         printf("Insufficient balance.\n");
//                                 }
//                                 break;
//                             default:
//                                 printf("Invalid amount.\n");
//                         }
//                         break;
//                     case 4:
//                         printf("Enter new PIN: ");
//                         scanf("%d", &newPin);
//                         pin = newPin;
//                         printf("PIN changed successfully.\n");
//                         break;
//                     case 5:
//                         printf("Thank you for using ATM.\n");
//                         break;
//                     default:
//                         printf("Invalid choice. Try again.\n");
//                 }
//             } while (choice != 5);
//             break;
//         default:
//             printf("Incorrect PIN. Access denied.\n");
//     }
//     return 0;
// }

//Write a program to print all even from 1-100
#include<stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}

