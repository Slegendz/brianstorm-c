#include<stdio.h>
#include<string.h>


int main(){
    char str1[100];
    char str2[100] = ".?\t'';,!";

    scanf("%[^\n]s",str1);

    char * ptr = strtok(str1,str2);

    printf("%d \n",ptr);

    while(ptr != NULL){                      // NULL is a integer here (means NULL is storing address) we are comparing address here acc. to me
        printf("%s ",ptr);
        ptr = strtok(NULL,str2);
    }

    return 0;
}