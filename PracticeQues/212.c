// develop a program to find second largest number in an array using pointers.

#include<stdio.h>

int main(){
    int n;
    printf("enter n elements in array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }

    int max = *arr;
    for(int i=1; i<n; i++){
        if(*(arr+i) > max){
            max = *(arr+i);
        }
    }

    int a = 0;
    int secondmax = a;

    for(int i=0; i<n; i++){
        if(max != secondmax && max != *(arr+i)){
            if(*(arr+i) > secondmax)
            secondmax = *(arr+i);
        }
    }
    printf("second max is : %d\n", secondmax);
}