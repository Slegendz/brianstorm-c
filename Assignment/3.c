/* Write a C program to reverse a string using pointers and display the string.
Name - Sachin Negi
Roll no - 54
Section - E1
Course - BTech
Branch - CSE
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input : ");
    gets(str);
    char str1[100];
    char *ptr = str1;
    int a = strlen(str)-1;
    for(int i=a; i>=0; i--){
        *ptr = str[i];
        ptr++;
    }
    *ptr = '\0';
    printf("Output : %s",str1);
    return 0;
}

// Ouput: 
// Input : matrix
// Output : xirtam
