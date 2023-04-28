// program to check whehter a string is anagram or not


#include<stdio.h>
#include<string.h>

void sortch(char str[],int n){
    for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n;j++){
        if(str[i]>str[j]){
            char temp = str[i];
            str[i] = str[j];
            str[j] =temp;
        }
    }
    }
}

int main(){
    char str[100];
    printf("enter string 1 : ");
    scanf("%[^\n]%*c",str);

    char str1[100];
    printf("enter another string : ");
    scanf("%[^\n]%*c",str1);

    int n = strlen(str);
    int m = strlen(str1);

    if(n!=m){
        printf("the string is not anagram");
        return 0;
    }

    strlwr(str);
    strlwr(str1);

    sortch(str,n);
    sortch(str1,m);

    if(strcmp(str,str1) == 0){
        printf("ANAGRAM");
    }
    else{
        printf("NOT ANAGRAM");
    }
}