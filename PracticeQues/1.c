/* 1. C program to find the number of occurences of each characters of strings accepted by the user and display the same to the output screen output should contain only alphabets */

#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    fgets(str,10,stdin);

    int n = strlen(str);
    for(int i=65; i<=90; i++){
        int count = 0;
        for(int j=0;j<n; j++){
            if(str[j] == (char)i)
            count++;
        }
        if(count!=0){
            printf("%c is occuring %d times\n",i,count);
        }
    }

    for(int i=97; i<=122; i++){
        int count = 0;
        for(int j=0;j<n; j++){
            if(str[j] == (char)i)
            count++;
        }
        if(count!=0){
            printf("%c is occuring %d times\n",i,count);
        }
    }
}
