#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>
#include<ctype.h>
//swapping two numbers using third variable
// int main(){
//     int a,b,temp;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     temp=b;
//     b=a;
//     a=temp;
//     printf("Values after swapping a: %d and b: %d",a,b);
//     return 0;    
// }
// int main(){
//     int a,b;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);  
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("Values after swapping a: %d and b: %d",a,b);
//     return 0;    
//}

// //add two numbers without using + operator
// int main(){
//     int a,b,i,temp;
//     printf("enter the value of a : ");
//     scanf("%d",&a);
//     printf("enter the value of b : ");
//     scanf("%d",&b);
//     while(b>0){//positive -> add
//         a++;
//         b--;
//     }
//     while(b<0){//negative -> sub
//         a--;
//         b++;
//     }
//     printf("Sum : %d",a);
//     return 0;
// }

//vowel or consonant?
// int main(){
//     char a;
//     printf("Enter the character : ");
//     scanf("%c",&a);
//     a=tolower(a);
//     switch(a){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         printf("Vowel");
//         break;
//         case 'b':
//         case 'c':
//         case 'd':
//         case 'f':
//         case 'g':
//         case 'h':
//         case 'j':
//         case 'k':
//         case 'l':
//         case 'm':
//         case 'n':
//         case 'p':
//         case 'q':
//         case 'r':
//         case 's':
//         case 't':
//         printf("Consonant");
//         break;
//         default:
//         printf("No such choices!");
//     }
//     return 0;
// }

//to cal area of diff shapes rect,circ,square, trianlge
// int main(){
//     char ch;
//     float area;
//     float a,b;
//     printf("Enter R for Rectangle\n");    
//     printf("Enter C for Circle\n");    
//     printf("Enter S for Square\n");    
//     printf("Enter T for Triangle\n");   
//     printf("Enter your choice : ");
//     scanf("%c",&ch);
//     ch=tolower(ch);
//     switch(ch){
//         case 'r':
//             printf("Enter the length of the rectangle : ");
//             scanf("%f",&a);
//             printf("Enter the breadth of the rectangle : ");
//             scanf("%f",&b);
//             area=a*b;
//             printf("Area of rectangle = %f",area);
//             break;
//         case 'c':
//             printf("Enter the radius of the circle : ");
//             scanf("%f",&a);
//             area=3.14*a*a;
//             printf("Area of circle = %f",area);
//             break;
//         case 's':
//             printf("Enter the side length of the square : ");
//             scanf("%f",&a);
//             area=a*a;
//             printf("Area of square = %f",area);
//             break;
//         case 't':
//             printf("Enter the base of the triangle : ");
//             scanf("%f",&a);
//             printf("Enter the height of the triangle : ");
//             scanf("%f",&b);
//             area=0.5*a*b;
//             printf("Area of triangle = %f",area);
//             break;
//         default:
//             printf("No such choices!");
//     }
//     return 0;
// }

//display grade system based on grade character
int main(){
    char grade;
    printf("Enter the grade : ");
    scanf("%c",&grade);
    grade=tolower(grade);
    switch(grade){
        case 'a':
        printf("Excellent");;
        break;
        case 'b':
        printf("Very Good");
        break;
        case 'c':
        printf("Good");
        break;
        case 'd':
        printf("Average");
        break;
        case 'f':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}
