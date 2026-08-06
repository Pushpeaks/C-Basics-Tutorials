#include<stdio.h>

// void main(){
//     int n,i;
//     printf("Total number of terms : ");
//     scanf("%d",&n);
//     for(i=n;i>0;i--){
//         printf("%d ",i);
//     }
// }

// int main(){
//     int i,num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
// }

// int main(){
//     int i;
//     printf("Multiplication table of 10 in reverse order");
//     for(i=10;i>=1;i++){
//         printf("10 x %d = %d\n",i,10*i);
//     }
// }

// int main(){
//     int num=0,sum=0;
//     while(num<=10){
//         sum=sum+num;
//         num++;
//     }
//     printf("Sum of numbers from 0 to 10 is: %d", sum);
//     return 0;
// }

//to find the sum of the first n natural numbers using for loop
// int main(){
//     int n,i,sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){ 
//         sum=sum+i;
//     }
//     printf("Sum of first %d natural numbers is : %d",n,sum);
//     return 0;
// }

//write a program to implement the previous program using for and do-while loop
// void main(){
//     int i,num,sum=0;
//     printf("Enter the total number of terms : ");
//     scanf("%d",&num);
//     for(i=0;i<=num;i++){
//         sum=sum+i;
//     }
//     printf("The sum : %d",sum);
// }

// void main(){
//     int i,num,sum=0;
//     printf("Enter the total number of terms : ");
//     scanf("%d",&num);
//     do{
//         sum=sum+num;
//         num--;
//     }while(num!=0);
//     printf("The sum : %d",sum);
// }

// void main(){
//     int i,sum=0;
//     for(i=1;i<=10;i++){
//         sum=sum+(i*8);
//     }
//     printf("%d ",sum);
// }

void main(){
    int i,num,fact=1;
    printf("Enter the number : ");
    scanf("%d ",&num);
    if(num==0 || num==1){
        printf("1");
    }
    else{
            for(i=num;i>=1;i--){
                fact=fact*i;
            }
    }
    printf("Factorial : %d",fact);
}



//fibonacci
// void main(){
//     int num=10,i,fibo;
//     print("0 1 ");
//     for(i=0;i<=num;i++){

//     }    
// }

