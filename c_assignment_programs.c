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

// #include<stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter two numbers : \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     if(a>b && b>c){
//         printf("%d is the smallest",c);
//     }
//     else if(a>b && c>b){
//         printf("%d is the smallest",b);
//     }
//     else if(c>a && b>a){
//         printf("%d is the smallest",a);
//     }else{
//         printf("All three are equal");
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
4) WAP to check whether the given character is Consonant or Vowel?
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower((unsigned char)ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Given character is a vowel\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Given character is a consonant\n");
    } else {
        printf("Please enter an alphabet character.\n");
    }

    return 0;
}