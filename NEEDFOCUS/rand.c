#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    int num;
    srand(time(0));

    for(int i=0; i<10; i++)
    printf("%d\n",rand()%100+1);
}