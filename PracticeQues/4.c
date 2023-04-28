// develop a c program whether a given name is present in the array or not.

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("enter the number of names you want to enter : ");
    scanf("%d",&n);

    char str[n][10];
    for(int i=0; i<n; i++){
        printf("enter name : ");
        scanf("%s",str[i]);
    }

    char str1[100];
    printf("enter the name you want to find in array : ");
    scanf("%s",str1);

    int flag = 0;
    for(int i=0; i<n; i++){
        if(strcmp(str1,str[i])==0){
            printf("Name is present in array");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Name is not present in array");
    }
}