//WAP to check whether the given number is prime or not
 #include <stdio.h>
 
 int main() {
     int num,i,prime=1;
     printf("Enter the number : ");
     scanf("%d",&num);
     if(num<=1){
        printf("Not a Prime Number");
        return 0;
     }
     for(i=2;i<=num/2;i++){
        if(num%i==0){
            prime=0;
            break;
        }
     }
     if(prime==1){
        printf("It is Prime Number");
     }else{
        printf("Not a Prime Number");
     }
     return 0;
 }