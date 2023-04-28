#include<stdio.h>
int main(){
    char str[50];
    printf("ENTER SENTENCE : ");
    gets(str);
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr==' '){
            ptr++;
            break;
        }
        ptr++;
    }
    printf("OUTPUT : %s",ptr);
    return 0;
}
