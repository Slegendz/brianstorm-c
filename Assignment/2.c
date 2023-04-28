/* Write a C program to concatenate two strings and display concatenated string.
Name - Sachin Negi
Roll no - 54
Section - E1
Course - BTech
Branch - CSE
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("Input string 1 : ");
    gets(str1);
    char str2[100];
    printf("Input string 2: ");
    gets(str2);
    int a = strlen(str1),b = strlen(str2);
    int i;
    for(i=0;i<b; i++){
        str1[a+i] = str2[i];
    }
    str1[a+i] = '\0';
    printf("Output : %s",str1);
    return 0;
}

Output: 
Input string 1 : Good
Input string 2 : Afternoon
Ouput : Good Afternoon
