//to check whether the given is even or odd
#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num==0||num%2==0){
        printf("Given number is even.");
    }else{
        printf("Given number is odd.");
    }
    return 0;
}
