#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    int a=x;
    int reverse=0;
    while(a>0){
        reverse=(reverse*10)+a%10;
        a=a/10;
    }
    a=x;
    if(reverse==a){
        printf("hlelo");
    }
    else if(reverse!=a){
        printf("hat\n");
        printf("%d",reverse);
    }
}

int main(){
    int x;
    scanf("%d",&x);
    isPalindrome(x);
}
 