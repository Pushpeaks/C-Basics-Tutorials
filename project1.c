/*number guessing game*/
#include<stdlib.h>
#include<stdio.h>

void main(){
    int gennum,guess,count=0,max=100,min=1,flag=1;
    gennum=(rand()%(max-min+1)+min);
    printf("===NUMBER GUESSING GAME===\n");
    while(flag!=0){
        printf("Your Guess : ");
        scanf("%d",&guess);
        if(guess<gennum){
            printf("Guess HIgher!");
            count++;
            ;
        }
        else if(guess>gennum){
            printf("Guess lower");
            count++;
            // break;
        }else{
            printf("You got that right!! at %dth attempt.",count);
            count++;
            flag=0;
            exit(1);
        }
    }  
} 

