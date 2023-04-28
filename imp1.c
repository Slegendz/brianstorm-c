#include<stdio.h>

int main(){
    char str1[100] = "hello";
    char *str2;
    str2= str1;
    str2[4] = 'O';

    *str1 = 'O';
    printf("%s",str2);
}