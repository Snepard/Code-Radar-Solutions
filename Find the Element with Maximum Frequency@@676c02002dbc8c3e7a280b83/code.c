#include <stdio.h>

int main() {
    int n, maxFreq = 0;
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int maxNum = nums[0];
    for (int i=0; i<n; i++){
        int f = 1;
        for (int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                f++;
            }
        }
        if(f>maxFreq){
            maxNum = nums[i];
        }
    }
    printf("%d", maxNum);
    return 0;
}