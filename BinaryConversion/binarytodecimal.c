#include<stdio.h>
#include<math.h>


int main(){
    int n;
    printf("enter binary number : ");
    scanf("%d",&n);
    int sum=0;
    int i=1;

    while(n>0){
        int a=n%10;
        if(a==0){
            sum=sum+0*pow(2,i);
        }
        else if(a==1){
            sum=sum+1*pow(2,i);
        }
        n=n/10;
        i++;
    }
    printf("the decimal number is %d",sum);
}