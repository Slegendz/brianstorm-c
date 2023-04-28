#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    scanf("%[^\n]%*c",str);

    char vtr[100];
    int a = strlen(str);
    for(int i=0;i<a-1; i++){
        for(int j=i+1; j<a; j++){
            if(str[j] == str[i]){
                str[j] = '~';
            }
        }
    }

    int j=0;
    for(int i=0; i<a; i++){
        if(str[i] == '~') continue;
        else 
        vtr[j] = str[i];
        j++;
    }

    printf("%s",vtr);
}