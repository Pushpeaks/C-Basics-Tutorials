//POINTER ARITHMETIC

/*
01
Addition of a number to a pointer.
02
Subtraction of a number from a pointer.
03
Subtraction of one pointer from another.
04
Comparison of two pointer variables.
*/

/*
Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d
array on the screen.
*/

// #include <stdio.h>

// int main() {
//     int i,j,arr[3][3];
//     printf("Enter some values for a 3x3 matrix (2-d array) :\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter %d row %d column value :\n",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Entered Matrix is as follows : \n");
//     printf("===============================\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
the third element where ptr is a pointer pointing to the first element of the array.
*/

/*
5. Write a program containing a function which reverses the array passed to it.
*/


#include <stdio.h>

void rev_arr(int* arr,int size){
    int start=0,end=size-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

/*
6. Write a program containing functions which counts the number of positive integers in
an array.
*/
int count_post(int* arr, int);
int count_post(int* arr, int size){
    int i,count=0;
    for(i=0;i<size;i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}

/*
Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
9 respectively.
*/

void multiplication_table(int,int,int);
void multiplication_table(int a,int b,int c){
    int arr[3][10];
    int i,j;
    for(i=0;i<1;i++){
        for(j=0;j<10;j++){
            arr[i][j]=a*(1+j);
        }
    }
    for(i=1;i<2;i++){
        for(j=0;j<10;j++){
            arr[i][j]=b*(1+j);
        }
    }
    for(i=2;i<3;i++){
        for(j=0;j<10;j++){
            arr[i][j]=c*(1+j);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*
Create a three-dimensional array and print the addresses of its elements in increasing
order. 
*/

int main() {
    // int arr[10]={1,2,3,4,5,6,7,8,9,0};
    // int* ptr=&arr[0];
    // printf("Value of ptr+2 is %d\n",*(ptr+2));
    // printf("Value of ptr is %d\n",*(ptr));
    // return 0;

//     int i;
//     int mul[10];
//     for(i=0;i<10;i++){
//         mul[i]=5*(i+1);
//     }
//     printf("Multiplication table of 5\n");
//     printf("==========================\n");
//     // printf("Multiplication table of 5\n");
//     for(i=0;i<10;i++){
//         printf("%d ",mul[i]);
//     }
// }


    // int i,num;
    // int mul[10];
    // printf("Enter the number whose multiplication table you want to store in the array : ");
    // scanf("%d",&num);
    // for(i=0;i<10;i++){
    //     mul[i]=num*(i+1);
    // }
    // printf("Multiplication table of %d\n",num);
    // printf("==========================\n");
    // // printf("Multiplication table of 5\n");
    // for(i=0;i<10;i++){
    //     printf("%d ",mul[i]);
    // }

    // int arr[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int i;

    // rev_arr(arr, size);

    // printf("Reversed Array : ");
    // for (i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    
    // int arr[10]={-1,0,6,7,-4,6,7,5,-11,34},x;
    // x= count_post(arr,10);
    // printf("%d",x);
    // return 0;

    // int a,b,c;
    // printf("Enter three variables whose multiplication table you want to print : \n");
    // scanf("%d %d %d",&a,&b,&c);
    // multiplication_table(a,b,c);
    int i,j,k;
    int arr[3][3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("enter the value : ");
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d ",arr[i][j][k]);
                // scanf();
            }
            printf("||");
        }
        printf("\n");
    }



    return 0;


}