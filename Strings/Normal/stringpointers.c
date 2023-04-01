#include<stdio.h>
#include<string.h>

char*myname(char *ptr){
    char *name = ptr;
    return name;
}


int main(){
    char arr[10] = "flavio";
    char *ptr = arr;
    printf("%s",myname(ptr));
}