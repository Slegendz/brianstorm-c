#include<stdio.h>
#include<string.h>

int main(){
    char str[10],temp_str[10];
    int i,l,flag = 0;

    printf("enter the string : ");
    gets(str);
    strcpy(temp_str,str);
    strrev(temp_str);

    if(strcmpi(temp_str,str) == 0){
        printf("palindrome");
    }
    else printf("not palindrome");
}