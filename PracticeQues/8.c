// develop a c program to initialize a variable 'a' and create a pointer ptr pointing to it 

#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    scanf("%[^\n]%*c",a);

    char *ptr = a;

    printf("address of a : %p\n",a);
    printf("address of ptr : %p\n",&ptr);
    printf("value of a : %s\n",a);
    printf("value of ptr : %s\n",ptr);
    printf("value pointed by ptr : %c\n",*ptr);
}