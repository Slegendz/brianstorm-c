#include<string.h>
#include<stdio.h>

char * astrcat(char str1[],char str2[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str1[i++] = str2[j++]);
    return str1;
}

int main(){
    char str1[100],str2[100];
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);

    printf("%s",astrcat(str1,str2));
}