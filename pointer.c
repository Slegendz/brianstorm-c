#include<stdio.h>

void sort(int arr[],int n){
    int *ptr = arr;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr + j);
                *(ptr+j) = temp;
            }
        }
    }
    return;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}