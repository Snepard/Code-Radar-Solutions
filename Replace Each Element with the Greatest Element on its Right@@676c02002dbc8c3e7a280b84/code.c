#include <stdio.h>

int rightMax(int arr[], int x, int n){
    int max = arr[x];
    for (int i=x; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        nums[i] = rightMax(nums,i+1,n);
        printf("%d ", &nums[i]);
    }
    return 0;
}