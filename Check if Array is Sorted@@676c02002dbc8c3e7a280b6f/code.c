#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int sorted = 1;
    for (int i=0;i<n;i++){
        if(nums[i]>=nums[i+1]){
            sorted = 0;
            break;
        }
    }
    if (sorted == 1){
        printf("Sorted");
    } else{
        printf("Not Sorted");
    }
    return 0;
}