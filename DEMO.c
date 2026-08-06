#include <stdio.h>

void main() {
    int num1, num2;
    char ch;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an arithmetic operator : ");
    // The space before %c skips the leftover newline character
    scanf(" %c", &ch); 
    
    printf("You entered: %c\n", ch);
}