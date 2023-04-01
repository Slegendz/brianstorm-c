#include<string.h>
#include<stdio.h>

int main(){
    char str1[100];
    char str2[100];

    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);
    
   // size_t strspn(str1,str2);          // strspn returns a integer value so integer datatype

    printf("%u",strspn(str1,str2));

}