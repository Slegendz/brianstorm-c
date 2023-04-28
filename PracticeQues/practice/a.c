// udf to remove all the repeated characters in a string


#include<stdio.h>
#include<string.h>

char string(char str[],int n){
char vtr[100];
int k=0;
char ch[100];


    for(int i=0; i<n-1; i++){
    int l = 0;
        while(l<n){
        if(str[i] == ch[l]){
            break;
        }
        l++;
        }

        if(str[i] == ch[l]) continue;
        
        for(int j=i+1;j<n; j++){
            if(str[i] == str[j]){
                ch[l] = str[i];
                l++;
            }
        }
            vtr[k] = str[i];
            k++;
    }
    vtr[k]  = '\0';
    printf("%s",vtr);
}




int main(){
    char str[100];
    printf("enter a string : ");
    scanf("%s",str);

    int n = strlen(str);

    string(str,n);

}