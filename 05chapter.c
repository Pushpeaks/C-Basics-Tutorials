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
    long int fact;
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

int fibo(int n){
    
}

void uptriangle(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(j*'* ');//constant char
        }

    }
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


}