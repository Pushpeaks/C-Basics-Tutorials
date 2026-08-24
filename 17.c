/*
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

*/
#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            printf("%3d",i*j);
        }
        printf("\n");
    }
    return 0;
}