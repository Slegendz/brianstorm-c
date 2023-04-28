#include<stdio.h>
#include<string.h>


int main(){
    char str[] = "Papa Tata dfhasdg hf sg gsd pa";
    char sep[] = " ";
     
    char *t;
    t = strtok(str,sep);
    while(t!= NULL){
        if(*t == 'p' || *t == 't' || *t == 'P' || *t == 'T'){
            printf("%s ",t);
        }
        t = strtok(NULL,sep);
    }
    return 0;
}