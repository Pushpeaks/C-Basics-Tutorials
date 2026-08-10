#include<math.h>
#include<stdio.h>

// void main(){
//     int num,sq;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     sq=pow(num,2);
//     printf("Square of the number : %d",sq);
// }

//factorial using recursion
unsigned long long int factorial(int num){
    unsigned long long int fact;
    if(num==0 || num==1){
        return 1;
    }else{
        fact=num*factorial(num-1);
    }
    return fact;
}

int average(int a,int b,int c){
    return (a+b+c)/3;
}

float farcel(float temp,char c){
    float far,cel;
    if(c=='f'){
        far=((9/5)*temp)+32;
        return far;
    }else if(c=='c'){
        cel=((temp-32)*5)/9;
        return cel;
    }else{
        printf("No such conversions!");
        return 1;
    }
}

float forceofattraction(float mass){
    float force;
    force=mass*9.8;
    return force;
}

//to calculate the nth number of the fibonacci series
int fibo(int n){
    int term;
    if(n<=1){
        return 0;
    }if(n==1){
        return 0;
    }if(n==2){
        return 1;
    }else{
        return fibo(n-2)+fibo(n-1);
    }
}

void uptriangle(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<(i*2)+1;j++){
            printf("* ");//constant char
        }
        printf("\n");   
    }
}


//  Write a recursive function to calculate the sum of first 'n' natural numbers.
int sumofnums(int num){
    int sum=0;
    if(num==0){
        return 0;
    }else if(num==1){
        return 0;
    }else{
        sum=num+sumofnums(num-1);
    }
    return sum;
}


void main(){
    // int num,a,b,c;
    // float avg;
    // printf("Enter three numbers : ");
    // scanf("%d %d %d",&a,&b,&c);
    // avg=average(a,b,c);
    // printf("Average : %f",avg);

    // // scanf("%d",&num);
    // // fact=factorial(num);   
    // // printf("%llu",fact); 

    // float temp,cv;
    // char c;
    // printf("Enter the temperature : ");
    // scanf("%f",&temp);
    // printf("Conversion unit : (c or f)");
    // scanf(" %c",&c);
    // cv=farcel(temp,c);
    // printf("Coverted -> %f",cv);

    // float mass,foa;
    // printf("Enter the mass of the body : ");
    // scanf("%f",&mass);
    // foa=forceofattraction(mass);
    // printf("Force of gravitational attraction on the given body is : %f N ",foa);

    /*undefined behaviour*/
    // int a = 4;
    // printf("%d %d %d \n", a, ++a, a++);

    // int n,sum;
    // printf("Enter a Number : ");
    // scanf("%d",&n);
    // sum=sumofnums(n);
    // printf("%d",&sum);

    // int term,dip;
    // printf("Enter the term you want : ");
    // scanf("%d",&term);
    // dip=fibo(term);
    // printf("%d term of the fibonacci series is : %d",term,dip);

    int lines;
    printf("Enter the total number of lines you want in the pattern : ");
    scanf("%d",&lines);
    uptriangle(lines);
}

