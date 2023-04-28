#include<stdio.h>
#include<string.h>


int main(){
    char str1[100];
    char str2[100] = ".?\t'';,!";

    scanf("%[^\n]s",str1);

    char *ptr = strtok(str1,str2);

    while(ptr != NULL){                      // NULL is a integer here so we are comparing ptr in integer form to the NULL
        printf("%s ",ptr);
        ptr = strtok(NULL,str2);
    }

    return 0;
}