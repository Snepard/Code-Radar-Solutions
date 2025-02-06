#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int max = nums[0], min = nums[0];
    for (int i=0; i<n; i++){
        if (nums[i]>max){
            max = nums[i];
        }
        if (nums[i]<min){
            min = nums[i];
        }
    }
    printf("%d", (max+min)/2);
    return 0;
}