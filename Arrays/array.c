#include<stdio.h>

int main(){
    int arr[9]={2};

    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);           // automatically adds 0 on the rest of the indexes if any one index value is given by the user
    }
}