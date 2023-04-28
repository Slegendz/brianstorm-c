#include<stdio.h>

void recursive(int arr[],int n,int b[]){
    if(n==0){
        b[0] = 1;
        return;
    }
    recursive(arr,n-1,b);

    for(int i=0; i<=n; i++){
        if(i== 0 || i==n){
            b[i] = 1;
            continue;
        }
        if(i==1){
         for(int j=0; j<= n; j++){
            arr[j] = b[j];
         }
        }
        b[i] = arr[i] + arr[i-1];
    }
    return;
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n+1];
    int b[n+1];

    recursive(arr,n,b);

    for(int i=0; i<=n; i++){
        printf("%d ",b[i]);
    }
}


/*  1
    1 1 
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    1 6 15 20 15 6 1
*/