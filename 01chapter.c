/*1. Write a C program to calculate the area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.*/

#include<stdio.h>

// void main(){
//     //using hard coded variables
//     int l=10,b=7;
//     int ul,ub;
//     printf("Area of the Rectangle is: %d\n",l*b);

//     //using user input
//     printf("Enter the length: ");
//     scanf("%d",&ul);
//     printf("Enter the breadth: ");
//     scanf("%d",&ub);
//     printf("\nThe area of the rectangle is : %d",ul*ub);
// }

/*
2. Calculate the area of a circle and modify the same program to calculate the volume of
a cylinder given its radius and height.
*/

// void main(){
//     float r,h;
//     int i;
//     printf("For circle press 1 \nFor cylinder press 2\n");
//     scanf("%d",&i);
//     switch(i){
//         case 1:
//         printf("Enter the radius of the circle : ");
//         scanf("%f",&r);
//         printf("Area of the circle is :%f", 3.14*r*r);
//         break;
//         case 2:
//         printf("Enter the radius of the base of the cylinder : ");
//         scanf("%f",&r);
//         printf("Enter the height of the cylinder : ");
//         scanf("%f",&h);
//         printf("Volume of the cylinder is :%f", 3.14*r*r*h);
//         break;
//         default:
//         printf("Wrong Choice!!");
//         // break;
//     }  
// }

/*
from degree to fahrenheit f=
*/
// void main(){
//     int i,c,f;
//     printf("Enter 1 for Celcius to Farenheit \nEnter 2 for Farenheit to Celcius\n");
//     scanf("%d",&i);
//     switch(i){
//         case 1:
//         printf("Enter temperature in celcius");
//         scanf("%d",&c);
//         f=((9/5)*c)+32;
//         printf("Temperature in FArenheit is : %d",f);
//         break;
//         case 2:
//         printf("Enter temperature in farenheit");
//         scanf("%d",&f);
//         c=5*(f-32)/9;
//         printf("Temperature in Celcius is : %d",c);
//         break;
//         default:
//         printf("No such options!");
//     }
// }


/*
SIMPLE INTEREST
*/

void main(){
    float p,r,t,si,amt;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time of interest (in years) : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    amt=p+si;
    printf("Simple interest : %f",si);
    printf("\nFinal amount : %f",amt);   
}