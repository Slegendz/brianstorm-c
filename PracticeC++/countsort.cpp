#include<iostream>
#include<climits>
using namespace std;

void countSort(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(arr[i],maxi);
    }

    int count[9] = {0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=maxi; i++){
        count[i]  += count[i-1];
    }

    int output[8];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}




int main(){
    int arr[] = {8,7,6,5,4,3,2,1};

    countSort(arr,8);

    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
}