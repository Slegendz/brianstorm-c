#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char str1[100];
    char str2[100];

    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]s",str2);

    char *str= strpbrk(str1,str2);                // pointer string is needed to use strpbrk() as it returns a pointer to the string

    printf("%s",str);
}