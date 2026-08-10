#include <stdio.h>

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void pass_by_ref(int *,int *);
void pass_by_ref(int *,int *){
    
}


int main() {
    // int a;
    // int b;
    // swap(&a,&b);
    // printf("Value after swapping ");
    // return 0;

    int i=7;
    int* j;
    j=&i;
    printf("The value of i is %d\n",i);
    printf("The value of i 10 times is %d",*j * 10);
}