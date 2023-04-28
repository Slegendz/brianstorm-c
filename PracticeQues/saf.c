#include<stdio.h>

int main(){
    int a = 10;


    int *arr[3];
    for(int i=0; i<3; i++){
        scanf("%d",(arr+i));
    }

    int *p = arr;
    printf("%d",*p);
}