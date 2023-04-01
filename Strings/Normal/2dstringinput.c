#include<stdio.h>
#include<string.h>

int main(){
    char str[5][10];

    for(int i=0; i<5; i++){
        scanf("%[^\n]%*c",str[i]);
    }

    for(int i=0; i<5; i++){
        printf("%s",str[i]);
        printf("\n");
    }
}