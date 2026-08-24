/*
F
FR
FRI
FRIE
FRIEN
FRIEND
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i <=6; i++){
        for (j = 0; j < i; j++){
            if(j<1){
                printf("F");
            }else if(j<2){
                printf("R");
            }else if(j<3){
                printf("I");
            }else if(j<4){
                printf("E");
            }else if(j<5){
                printf("N");
            }else{
                printf("D");
            }
        }
        printf("\n");
    }
    return 0;
}