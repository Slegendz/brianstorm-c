#include<stdio.h>
#include<string.h>

void reverse_str(char *ptr){
    int len = strlen(ptr);
    int k=0, t = len-1;
    char ch;
    while(k<t){
        ch = *(ptr+k);
        *(ptr+k) = *(ptr+t);
        *(ptr+t) = ch;
        k++;
        t--;
    }
}

int main(){
    char str[100];
    printf("enter stirng : ");
    scanf("%s",str);

    reverse_str(str);
    printf("%s",str);
}