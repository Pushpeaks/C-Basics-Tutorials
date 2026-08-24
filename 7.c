//arithmetic functions using pass by value
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int sum(int,int);
int diff(int,int);
int mult(int,int);
int div(int,int);

int main() {
    int choice,ch;
    int a,b,res;
    do{
        printf("=========BASIC CALCULATOR========\n");
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Else for Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the first number : ");
                scanf("%d",&a);
                printf("Enter the first number : ");
                scanf("%d",&b);
                res=sum(a,b);
                printf("Sum : %d",res);
            break;

            case 2:
                printf("Enter the first number : ");
                scanf("%d",&a);
                printf("Enter the first number : ");
                scanf("%d",&b);
                res=diff(a,b);
                printf("Difference : %d",res);
            break;

            case 3:
                printf("Enter the first number : ");
                scanf("%d",&a);
                printf("Enter the first number : ");
                 scanf("%d",&b);
                res=mult(a,b);
                printf("Product : %d",res);
            break;

            case 4:
                printf("Enter the first number : ");
                scanf("%d",&a);
                printf("Enter the first number : ");
                scanf("%d",&b);
                res=div(a,b);
                printf("Quotient : %d",res);
            break;

            default:
                goto end;
        }
        printf("\nDo you want to continue ? 1 for yes or 0 for no");
        scanf("%d",&ch);
    }while(ch!='0');
end:
    return 0;
}



int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}

 