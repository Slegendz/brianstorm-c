#include<stdio.h>

int main(){
    char str[50];
    gets(str);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]!=' '){
            printf("%c ", str[i+1]);
        }
        if(i==0 && str[i]!=' '){
            printf("%c ",str[i]);
        }
        i++;
    }
}