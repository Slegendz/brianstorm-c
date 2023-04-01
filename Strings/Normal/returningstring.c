#include<stdio.h>

char * name(char str[]){
    char *name = "have";
    return name;
}

int main(){
    char str[100];
    scanf("%s",str);

    char *a = name(str);

    printf("%s",a);
}