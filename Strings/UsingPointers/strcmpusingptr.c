#include<stdio.h>

int strcmp(char *ptr,char *btr){
    while(*ptr==*btr){
        if(*ptr=='\0'){
            return 1;
        }
        ptr++;
        btr++;
    }
    return 0;
}

int main(){
    char str[100];
    char vtr[100];

    scanf("%s",str);
    scanf("%s",vtr);

    char *ptr = str;
    char *btr = vtr;

    printf("%d",strcmp(ptr,btr));
}