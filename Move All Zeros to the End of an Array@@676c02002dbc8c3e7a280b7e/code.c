#include <stdio.h>
int main() {
    int n, j=0;
    scanf("%d",&n);
    int arr[n], newArr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);  
    }
    for (int i=0; i<n; i++){
        if(arr[i] != 0){
            newArr[j] = arr[i];
            j++;
        }
    }
    for (int i=j; i<n; i++){
        newArr[i] = 0;
    }
    for (int i=0; i<n; i++){
        printf("%d ", newArr[i]);
    }
    return 0;
}