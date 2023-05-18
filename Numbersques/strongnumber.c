#include<stdio.h>

int main(){
    int n;
    printf("enter the value of N : ");
    scanf("%d",&n);

int i;
int fact=1;
    for(i=1;i<=n;i++){
        int b=i;
        int sum=0;
        while(i!=0){
            int a=i%10;
            for(int j=1;j<=a;j++){
                    fact=fact*j;
                }
                sum=sum+fact;
                i=i/10;
                fact=1;
            }
        i=b;
        if(sum==i){
            printf("%d is a strong number\n",i);
        }
    }
}
