#include <stdio.h>
void bubbleSort(int nums[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    bubbleSort(nums, n);
    printf("%d", nums[n/2]);
    return 0;
}