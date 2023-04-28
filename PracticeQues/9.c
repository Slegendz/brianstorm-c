// develop a program to find the sum and product of two pointer variables ptr1 and ptr2 pointing to value a and b.

#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    int sum = (*ptr1) + (*ptr2);
    printf("sum is : %d\n",sum);

    int product = (*ptr1)*(*ptr2);
    printf("product is : %d\n",product);
}