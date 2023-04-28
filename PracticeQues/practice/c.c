// udf to remove all the repeated characters in a string


#include<stdio.h>
#include<string.h>

char string(char str[],int n){
char vtr[100];
int l=0,k=0;
char ch[100];
int a=0;

    for(int i=0; i<n; i++){

        for(int p=0; p<n; p++){
        if(ch[p] == str[i]){
            a = p;
            break;
        }
        }

        if(ch[a] == str[i]){
            continue;
        }

        for(int j=i+1; j<n; j++){
            if(str[i] == str[j]){
                ch[l] = str[j];
                l++;
            }
        }
        vtr[k] = str[i];
        k++;
    }
    vtr[k] = '\0';
    printf("%s",vtr);
}




int main(){
    char str[100];
    printf("enter a string : ");
    scanf("%s",str);

    int n = strlen(str);

    string(str,n);

}