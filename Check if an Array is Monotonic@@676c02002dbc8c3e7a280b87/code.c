#include <stdio.h>

int isAscending(int arr[], int n){
    for (int i=0; i<n-1; i++){
        if(arr[i+1]<arr[i]){
            return 0;
        } 
    }
    return 1;
}
int isDescending(int arr[], int n){
    for (int i=0; i<n-1; i++){
        if(arr[i+1]>arr[i]){
            return 0;
        } 
    }
    return 1;
}

int main() {
    int n, mono = 0;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    mono = isAscending(nums, n) || isDescending(nums, n);
    if (mono == 1){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}