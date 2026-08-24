/*
Program to find the grade of a student given his marks based on below
90 – 100 ⇒ A
80 – 90 ⇒ B
70 – 80 ⇒ C
60 – 70 ⇒ D
50 – 60 ⇒ E
<50 ⇒ F
*/

#include <stdio.h>

// void main(){
//     int score;
//     printf("Enter your score : ");
//     scanf("%d",&score);
//     if(score<0 || score>100){
//         printf("Enter valid score!");
//     }
//     else{
//         if(score>90 && score<=100){
//             printf("Grade A");
//         }
//         else if(score>80 && score<=90){
//             printf("Grade B");
//         }
//         else if(score>70 && score<=80){
//             printf("Grade C");
//         }
//         else if(score>60 && score<=70){
//             printf("Grade D");
//         }
//         else if(score>50 && score<=60){
//             printf("Grade E");
//         }
//         else {
//             printf("Grade F");
//         }
//     }
// }

// void main()
// {
//     int a = 10;
//     if (a = 11)
//         printf("I am 11");
//     else
//         printf("I am not 11");
// }

//to determine whether a student has passed or failed
// void main(){
//     int m1,m2,m3,total;
//     printf("Enter the marks of 1st subject : ");
//     scanf("%d",&m1);
//     printf("Enter the marks of 2nd subject : ");
//     scanf("%d",&m2);
//     printf("Enter the marks of 3rd subject : ");
//     scanf("%d",&m3);
//     total=m1+m2+m3;
//     if(m1<33 || m2<33 || m3<33){
//         printf("Failed!");
//     }else if(((total)/3) < 40){
//         printf("Failed!");
//     }else{
//         printf("Passed!");
//     }
// }

//income tax calculation
// void main(){
//     float sal,tax;
//     printf("Enter your salary in LPA (1.0,2.0,3.0 so on and so forth): ");
//     scanf("%f",&sal);
//     if(sal<=2.5){
//         printf("No tax is applicable!");
//     }
//     else if(sal<0){
//         printf("Enter a valid salary!");
//     }
//     else{
//         if(sal>2.5 && sal<=5.0){
//             tax=sal*0.05;
//             printf("5 percent tax is applicable : %f Lakhs",tax);

//         }else if(sal>5.0 && sal<=10.0){
//             tax=sal*0.2;
//             printf("20 percent tax is applicable : %f Lakhs",tax);
//         }else{
//             tax=sal*0.3;
//             printf("30 percent tax is applicable : %f Lakhs",tax);
//         }
//     }
// }

//leap year
// void main(){
//     int year;
//     if(year%4==0){
//         printf("This year is a leap year!");
//     }else{
//         printf("It is not a leap year!");
//     }
// }

//whether it is a lowercase or uppercase
// void main(){
//     char c;
//     int d;
//     printf("Enter a character : ");
//     scanf("%c",&c);
//     d=atoi(c);
//     if(d>= || d<=){
//         printf("Uppercase");
//     }else{
//         printf("Lowercase");
//     }
// }

//wap to find the greatest of the 4 numbers
void main(){
    int num1,num2,num3,num4;
    printf("Enter the number : ");
    scanf("%d",&num1);
    printf("Enter the number : ");
    scanf("%d",&num2);
    printf("Enter the number : ");
    scanf("%d",&num3);
    printf("Enter the number : ");
    scanf("%d",&num4);
    if(num1==num2 && num2==num3 && num3==num4){
        printf("num1 is the greatest!");
    }else if( num1>num2 && num1> num3 && num1>num4 ){
        printf("num1 is the greatest!");
    }else if( num2>num1 && num2> num3 && num2>num4 ){
        printf("num2 is the greatest!");
    }else{
        printf("num3 is the greatest!");
    }
}