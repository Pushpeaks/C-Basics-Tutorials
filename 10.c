//WAP to print odd numbers from 1 to 100

#include<stdio.h>

void main(){
    int i;
    for(i=0;i<=100;i++)
        if(i%2!=0)
            printf("%d ",i);
}