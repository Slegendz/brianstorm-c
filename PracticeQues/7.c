// udf to remove all the repeated characters in a string


#include<stdio.h>
#include<string.h>

char string(char str[],int n){
char vtr[100];

int i=0;
int j=0;
  while(i<n){
    if(str[i]!=str[i+1]){
        vtr[j] = str[i];
        j++;
    }
    i++;
  }
    vtr[j] = '\0';
    printf("%s",vtr);
}




int main(){
    char str[100];
    printf("enter a string : ");
    scanf("%s",str);

    int n = strlen(str);

     for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n;j++){
        if(str[i]>str[j]){
            char temp = str[i];
            str[i] = str[j];
            str[j] =temp;
        }
    }
    }

    string(str,n);

}