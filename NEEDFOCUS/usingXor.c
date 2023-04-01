#include<stdio.h>

int main(){
    int a = printf("hello");
    int b = printf("world");

    printf("%d",(a^b));
}