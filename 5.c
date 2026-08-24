//wap for calculating the sum and the abg of the n nnumberss
#include <stdio.h>
#include<conio.h>

int main() {
    int n,sum=0,j;
    float avg;
    printf("How many numbers do you have to enter? : \n");
    scanf("%d",&n);
    printf("Start entering : ");
    for(int i=0;i<n;i++){
        scanf("%d",&j);
        sum+=j;
    }
    avg=sum/n;
    printf("The sum of n given numbers : %d\n",sum);
    printf("The avg of n given numbers : %.2f\n",avg);
    return 0;
}