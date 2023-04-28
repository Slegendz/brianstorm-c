// develop a c program to read in a 2d array and sort in asceding order.

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("enter the names you want to start : ");
    scanf("%d",&n);

    char str[n][10];
    for(int i=0; i<n; i++){
        printf("enter name : ");
        scanf("%s",str[i]);
    }

    char temp[100];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(str[i],str[j]) > 0 ){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s\n",str[i]);
    }
}