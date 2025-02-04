#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], used[n], usedCount = 0;

    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<n; i++){
        int c = 0, isUsed = 0;
        for (int j=0; j<usedCount; j++){
            if(nums[i]==used[j]){
                isUsed = 1;
                break;
            }
        }
        if (!isUsed){
            for (int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            used[usedCount++] = nums[i];
        }
        printf("%d %d\n", nums[i], count);
    }
    return 0;
}