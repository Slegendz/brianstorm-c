// Develop a program to capitalize each alternate word in string

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%[^\n]%*c",str);

    for(int i=0; str[i]!='\0'; i++){
        if(i%2!=0 && str[i]>=97 && str[i]<=122){
            str[i] = str[i] - 32;
        }
    }
    printf("%s",str);
}