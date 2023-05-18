#include<stdio.h>

int main(){
    int n1,n2;
    printf("enter the two numbers : ");
    scanf("%d%d",&n1,&n2);
    int a;

    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            a=i;                 // where a is the HCF highest common factor
        }
    }

    int lcm=(n1*n2)/a;                  // dividing hcf to get the lcm
    printf("the lcm of two numbers is : %d",lcm);


}