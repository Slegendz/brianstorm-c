#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int brr [10] = {0};
    int count =0;
    int j=0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            continue;
        }
        else{
            brr[j] = arr[i];
            j++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", brr[i]);
    }

}