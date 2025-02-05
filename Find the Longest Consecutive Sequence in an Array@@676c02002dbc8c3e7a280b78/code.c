#include <stdio.h>

void bubbleSort(int arr[], n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    return 0;
}