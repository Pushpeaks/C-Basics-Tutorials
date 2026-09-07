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
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the greatest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest number.\n", b);
    } else {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}

