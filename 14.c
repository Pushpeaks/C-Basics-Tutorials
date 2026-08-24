//WAP for implementing arithemetic operations using nested if
#include<stdio.h>

int main(){
    char ch;
    int a,b;
    printf("MENU FOR THE OPERATIONS\n");
    printf("========================\n");
    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter x for Multiplication\n");
    printf("Enter / for Division\n");
    printf("Enter any other key for exit\n");
    printf("========================\n");
    scanf("%c",&ch);
    if(ch!='+' || ch!='-' || ch!='*' || ch!='/'){
        printf("No such options!!\n");
    }else{
        if(ch=='+'){
            printf("Enter the first number :\n");
            scanf("%d",&a);
            printf("Enter the second number :\n");
            scanf("%d",&b);
            printf("Sum : %d + %d = %d",a,b,a+b);
        }else if(ch=='-'){
            printf("Enter the first number :\n");
            scanf("%d",&a);
            printf("Enter the second number :\n");
            scanf("%d",&b);
            printf("Sum : %d - %d = %d",a,b,a-b);
        }else if(ch=='*'){
            printf("Enter the first number :\n");
            scanf("%d",&a);
            printf("Enter the second number :\n");
            scanf("%d",&b);
            printf("Sum : %d x %d = %d",a,b,a*b);
        }else{
            printf("Enter the first number :\n");
            scanf("%d",&a);
            printf("Enter the second number :\n");
            scanf("%d",&b);
            printf("Sum : %d / %d = %d",a,b,a/b);
        }
    }
    return 0;
}

