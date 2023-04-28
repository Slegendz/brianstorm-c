// develop a progrma to extract a portion of string and print extracted string. assume m chracters are extracted starting with nth character


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,100,stdin);

    int m,n;
    printf("enter n from where you want to start :");
    scanf("%d",&n);

    printf("enter characters you want to extract : ");
    scanf("%d",&m);

    char str1[100];
    int j=0;
    for(int i=n; i<(n+m); i++){
        str1[j] = str[i];
        j++;
    }
    str1[j] = '\0';
    printf("%s",str1);
}