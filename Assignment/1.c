/* Write a C program to copy a string to another string without using built in funtion.
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
    printf("Enter a String : ");
    gets(str);
    char a[100];
    int b = strlen(str),i;
    for(i=0; i<b; i++){
        a[i] = str[i];
    }
    a[i] = '\0';
    printf("Original String : %s\n",str);
    printf("Copied String : %s",a);
    return 0;
}

Output: 
Enter a String : Graphic Era Hill University
Original String : Graphic Era Hill University
Copied String : Graphic Era Hill Universiy
