// develop a c program using pointers to read an array of integers and print it's elements.

#include<stdio.h>

int main(){
    int n;
    printf("enter the value of N : ");
    scanf("%d",&n);

    int *arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }

    for(int i=0; i<n; i++){
        printf("%d ",*(arr+i));
    }
}