#include<stdio.h>

// getting the elements
// int main(){
//     int arr[10]; //10 elements will be there in this array
//     int i;
//     for(i=0;i<10;i++){
//         printf("Enter %d element : \n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("PRINTING THE CONTENT OF THE ARRAY\n");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }

//sum and avg
// int main(){
//     int arr[10]; //10 elements will be there in this array
//     int i,sum=0;
//     for(i=0;i<10;i++){
//         printf("Enter %d element : \n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("PRINTING THE SUM OF THE ELEMENTS IN THE ARRAY\n");
//     for(i=0;i<10;i++){
//         sum+=arr[i];
//     }
//     printf("Sum : %d\n",sum);
//     printf("PRINTING THE AVG OF THE ELEMENTS IN THE ARRAY\n");
//     printf("Average : %d",sum/10);
// }

//even and odd
// int main(){
//     int arr[10]; //10 elements will be there in this array
//     int i,sum=0;
//     for(i=0;i<10;i++){
//         printf("Enter %d element : \n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("PRINTING THE EVEN ELEMENTS IN THE ARRAY\n");
//     for(i=0;i<10;i++){
//         if(arr[i]%2==0)
//         printf("%d ",arr[i]);        
//     }
//     printf("\nPRINTING THE ODD ELEMENTS IN THE ARRAY\n");
//     for(i=0;i<10;i++){
//         if(arr[i]%2!=0)
//         printf("%d ",arr[i]);        
//     }
// }


//reverse
// int main(){
//     int arr[10]; //10 elements will be there in this array
//     int i,sum=0;
//     for(i=0;i<10;i++){
//         printf("Enter %d element : \n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("PRINTING THE REVERSED ARRAY\n");
//     for(i=9;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// }

//search
int main(){
    int arr[10]; //10 elements will be there in this array
    int i,search,flag=1,id;
    for(i=0;i<10;i++){
        printf("Enter %d element : \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&search);
    printf("PRINTING THE INDEX OF THE DEMANDED ELEMENT IN THE ARRAY IF IT EXISTS\n");
    for(i=0;i<10;i++){
        if(arr[i]==search){
            flag=0;
            id=i; 
        }              
    }
    if(flag==0){
        printf("Element found at index %d",id);
    }else{
        printf("Element not found");
    }
}