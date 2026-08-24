//WAP to calculate the area of given shapes using switch case circle, rectangle, square, triangle
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float circle();
float tri();
float rect();
float sq();

void main(){
    int choice;
    float res;
    printf("=======================================================================\n");
    printf("Enter the shape's number from the following menu to calculate its area\n");
    printf("Enter 1 to for Circle\n");
    printf("Enter 2 to for Square\n");
    printf("Enter 3 to for Triangle\n");
    printf("Enter 4 to for Rectangle\n");
    printf("Else for Exit\n");
    printf("=======================================================================\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        res=circle();
        printf("Area : %f sq. units \n",res);
        break;        
        case 2:
        res=sq();
        printf("Area : %f sq. units \n",res);
        break;
        case 3:
        res=tri();
        printf("Area : %f sq. units \n",res);
        break;
        case 4:
        res=rect();
        printf("Area : %f sq. units \n",res);
        break;
        default:
        exit(0);
    }
}

float circle(){
    float res,r;
    printf("Enter the radius measure : \n");
    scanf("%f",&r);
    res=3.14*r*r;
    return res;
}
float sq(){
    float res,s;
    printf("Enter the side measure : \n");
    scanf("%f",&s);
    res=s*s;
    return res;
}
float rect(){
    float res,b,l;
    printf("Enter the length measure : \n");
    scanf("%f",&l);
    printf("Enter the breadth measure : \n");
    scanf("%f",&b);
    res=l*b;
    return res;
}
float tri(){
    float res,b,h;
    printf("Enter the height measure : \n");
    scanf("%f",&h);
    printf("Enter the base measure : \n");
    scanf("%f",&b);
    res=0.5*b*h;
    return res;
}
