#include<stdio.h>
#include<string.h>

// using another string to store the reverse of str string

int main(){
    char str[100];
    scanf("%[^\n]%*c",str);

    int l = strlen(str)-1;
    char *ptr = str;

    ptr += l;

    char s[100];
    char *v = s;

    for(int i=0; i<strlen(str); i++){
        *v = *ptr;                          // *v is storing values at string s 
        ptr--;
        v++;
    }

    *v = '\0';            //  \0 in the end of the string to mark the end of the string else it will print nonsense in the end 

    printf("%s",s);

}