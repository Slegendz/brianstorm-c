#include<stdio.h>

int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f = f*i;
    }
    return f;
}

int combination(int n,int i){
    if(i==0){
        return 1;
    }
    int a = fact(n);
    int c = fact(n-i);
    return a/(fact(i)*c);
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        printf("%d ", combination(n,i));
    }

    
}