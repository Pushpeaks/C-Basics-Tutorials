//STRINGS
#include <stdio.h>
#include<string.h>

// int main() {
//     char s[10];
//     // scanf("%s",s);
//     // printf("%s ",s);    
//     gets(s);
//     puts(s);
//     return 0;
// }

/*
2. Write a program to take string as an input from the user using %c and %s and
confirm that the strings are equal.
*/

// int main() {
//     int i=0,flg;
//     char c[10],s[10],ch;
//     printf("Enter a string : ");
//     scanf("%s",s);
//     printf("Enter the same string character by character : ");
//     for(i=0;i<10;i++){
//         scanf(" %c",&c[i]);
//         if(c[i]=='.' || c[i]=='\n'){
//             break;
//         }
//     }
//     c[i]='\0';
//     flg=strcmp(c,s);
//     // printf("%d ",flg);
//     printf("\nstrcmp Result: %d\n", flg);
//     if (flg == 0) {
//         printf("Dono strings bilkul EQUAL hain!\n");
//     } else {
//         printf("Dono strings EQUAL nahi hain.\n");
//     }
//     return 0;
// }


/*
3. Write your own version of strlen function from <string.h> .
*/
int str_len(char* );
int str_len(char* str){
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char s[30];
    int i;
    printf("Enter a sentence : ");
    gets(s);
    i=str_len(s);
    printf("\nLength of the string (including in between spaces) using my function is : %d",i);
}

/*
4. Write a function slice() to slice a string. It should change the original string such
*/


/*

that it is now the sliced string. Take m and n as the start and ending position for
slice.
5. Write your own version of strcpy function from <string.h> .
6. Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
7. Write a program to decrypt the string encrypted using encrypt function in problem 6.
8. Write a program to count the occurrence of a given character in a string.
9. WAP to check whether the given character is present in the string or not?
*/