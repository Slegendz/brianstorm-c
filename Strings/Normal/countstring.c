#include<stdio.h>

int countlength(char arr[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);                      // fgets is treating new line(enter key here) as \n thats why we did -1 in count to get legnth
    printf("length is : %d", countlength(name));
}

int countlength(char arr[]){
    int count =0;
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
        count++;
    }
    return count-1;
}