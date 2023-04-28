/* Write a C program to compare two strings and return 1 if strings are equal and 0 otherwise without using built in function.
Name - Sachin Negi
Roll no - 54
Section - E1
Course - BTech
Branch - CSE
*/

#include<stdio.h>
#include<string.h>
int scomp(char *ptr1,char *ptr2){
    while(*ptr1 == *ptr2){
        if(*ptr1 == '\0'){
            return 1;
        }
        ptr1++,ptr2++;
    }
    return 0;
}
int main(){
    char str1[100],str2[100];
    printf("Enter two strings : ");
    gets(str1);
    gets(str2);
    if(scomp(str1,str2)){
        printf("The Strings are equal");
    }
    else{
        printf("The Strings are not equal");
    }
    return 0;
}

// Output:
// Enter two strings : Hello
// hello
// Output : The Strings are not equal
