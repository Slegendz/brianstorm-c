#include<stdio.h>
#include<string.h>

char *stra(char *ptr,char * vtr){
    char *p = ptr;
    while(*p != '\0'){
        p++;
    }
    while(*p++ = *vtr++)
    ;
    return ptr;
}

int main(){
    char str[100];
    scanf("%[^\n]%*c",str);

    char dtr[100];
    scanf("%[^\n]%*c",dtr);

    char *ptr = str;
    char *vtr = dtr;
    printf("%s",stra(ptr,vtr));
}