#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%[^\n]%*c",str);

    int a= strlen(str);

    int count = 1;
    int max = 0;
    int i=0,k=0;

    while(str[i]!='\0'){
        if(str[i] == '@'){
            i++;
            continue;
        }
     for(int j=i+1; j<a; j++){
        if(str[i] == str[j]){
            str[j] = '@';
            count++;
        }
     }
     if(max<count){
        max = count;
        k=i;
     }
     count = 1;
     i++;
    }

    printf("%d is max that is %c",max,str[k]);
}